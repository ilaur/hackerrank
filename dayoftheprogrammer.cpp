#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

bool is_leap_julian(int year)
{
    if(year % 4 == 0)
        return true;
    return false;
}

bool is_leap_gregorian(int year)
{
    if((year % 400 == 0) || ((year % 4 == 0) && !(year % 100 == 0)))
        return true;
    return false;
}

int main(int argc, char *argv[])
{
    std::string yr;std::cin>>yr;
    int year = std::stoi(yr);
    int month=0, day=0, sum=0;
    int month_leap[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, month_nleap[12];
    for(int i=0; i<12; i++)
        month_nleap[i] = month_leap[i];
    month_nleap[1] -= 1;
    if(year < 1918)
    {
        int stub;
        if(is_leap_julian(year))
        {
            for(int i=0; i<12 && sum < 256; i++)
            {
                sum += month_leap[i];
                stub=i;
                month++;
            }
            sum -= month_leap[stub];
            day = 256-sum;
        }
        else
        {
            for(int i=0; i<12 && sum < 256; i++)
            {
                sum += month_nleap[i];
                stub=i;
                month++;
            }
            sum -= month_leap[stub];
            day = 256-sum;
        }
    }
    else if(year > 1918)
    {
        int stub;
        if(is_leap_gregorian(year))
        {
            for(int i=0; i<12 && sum < 256; i++)
            {
                sum += month_leap[i];
                stub=i;
                month++;
            }
            sum -= month_leap[stub];
            day = 256-sum;
        }
        else
        {
            for(int i=0; i<12 && sum < 256; i++)
            {
                sum += month_nleap[i];
                stub=i;
                month++;
            }
            sum -= month_leap[stub];
            day = 256-sum;
        }
    }
    else
    {
        month_leap[1] -= 13;
        month_nleap[1] -= 13;
        int stub;
        if(is_leap_gregorian(year))
        {
            for(int i=0; i<12 && sum < 256; i++)
            {
                sum += month_leap[i];
                stub=i;
                month++;
            }
            sum -= month_leap[stub];
            day = 256-sum;
        }
        else
        {
            for(int i=0; i<12 && sum < 256; i++)
            {
                sum += month_nleap[i];
                stub=i;
                month++;
            }
            sum -= month_leap[stub];
            day = 256-sum;
        }
    }
    if(day<10)
        std::cout<<'0';
    std::cout<<day<<'.';
    if(month<10)
        std::cout<<'0';
    std::cout<<month<<"."<<year;
    return 0;
}
