#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

typedef std::vector<int> vec;
typedef std::vector<int>::iterator itr;

int main()
{
    int n,k;
    std::cin>>n>>k;
    vec v;
    for(int i=0; i<n; ++i)
    {
        int val;std::cin>>val;
        v.push_back(val);
    }
    int count=0;
    for(itr i=v.begin(), e=v.end(); i!=e; ++i)
    {
        for(itr j=i+1; j!=e; ++j)
        {
            int sum = *j + *i;
            if(sum % k == 0)
                count++;
        }
    }
    std::cout<<count;
    return 0;
}
