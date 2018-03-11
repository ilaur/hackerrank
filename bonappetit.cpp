#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

typedef std::vector<int> vec;

int main(int argc, char *agrv[])
{
    int n, k;
    std::cin>>n>>k;
    vec v;
    for(int i=0, val; i<n; ++i)
    {
        std::cin>>val;
        v.push_back(val);
    }
    int b_charged;std::cin>>b_charged;
    int total=0;
    for(int i=0; i<v.size(); ++i)
    {
        if(i == k)
            continue;
        total += v[i];
    }
    int b_real = total/2;
    if(b_real == b_charged)
        std::cout<<"Bon Appetit";
    else
        std::cout<<b_charged-b_real;
    return 0;
}
