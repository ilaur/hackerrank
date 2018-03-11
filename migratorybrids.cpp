#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef std::vector<int> vec;
typedef std::vector<int>::iterator itr;

int main(int argc, char *argv[])
{
    int n;std::cin>>n;
    vec v;
    for(int i=0; i<n; ++i)
    {
        int val;std::cin>>val;
        v.push_back(val);
    }
    int a[5]={0,0,0,0,0};
    for(itr i=v.begin(), e=v.end(); i!=e; ++i)
    {
        switch(*i)
        {
            case 1:
                a[0]++;
                break;
            case 2:
                a[1]++;
                break;
            case 3:
                a[2]++;
                break;
            case 4:
                a[3]++;
                break;
            case 5:
                a[4]++;
                break;
        }
    }
    int max = 0, inc=0;
    for(int i=0; i<5; ++i)
    {
        if(max < a[i])
        {
            max = a[i];
            inc = i;
        }
    }
    std::cout<<inc+1;
    return 0;
}
