#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef std::vector<int>::iterator itr;

int get_num(std::vector<int> v, char sym='>')
{
    if(sym == '>')
    {
        itr i=v.begin();
        int max = *i;
        for(itr e=v.end(); i != e; ++i)
        {
            if(max < *i)
                max = *i;
        }
        return max;
    }
    else if(sym == '<')
    {
        itr i=v.begin();
        int min = *i;
        for(itr e=v.end(); i != e; ++i)
        {
            if(min > *i)
                min = *i;
        }
        return min;
    }
    return 0;
}

int main() {
    int n, m;
    std::cin>>n>>m;
    std::vector<int> a, b;
    for(int i=0; i<n; i++)
    {
        int p;
        std::cin>>p;
        a.push_back(p);
    }
    for(int j=0; j<m; j++)
    {
        int p;
        std::cin>>p;
        b.push_back(p);
    }
    int no_of_integ = 0, min = get_num(b, '<'), max = get_num(a);
    for(int x= max; x <= min; ++x)
    {
        bool pass = false;
        for(itr p = a.begin(); p != a.end(); ++p)
        {
            if( x % *p == 0)
                pass = true;
            else
            {
                pass = false;
                break;
            }
        }
        if(pass)
        {
            for(itr q = b.begin(); q != b.end(); ++q)
            {
                if( *q % x == 0)
                    pass = true;
                else
                {
                    pass = false;
                    break;
                }
            }
        }
        if( pass )
            no_of_integ++;
    }
    std::cout<<no_of_integ;
    return 0;
}
