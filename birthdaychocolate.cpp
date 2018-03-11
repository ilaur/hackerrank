#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

typedef std::vector<int> vec;
typedef std::vector<int>::iterator itr;

int main() {
    // read the input
    int n;
    std::cin>>n;
    vec v;
    for(int i=0; i<n; ++i)
    {
        int val;
        std::cin>>val;
        v.push_back(val);
    }
    int m, d;
    std::cin>>d>>m;
    // process
    int ways=0;
    for(itr i=v.begin(), e=v.end(); i!=e; ++i)
    {
        int sum=0;
        for(itr j=i; (j<i+m)&&(i+m!=v.end()+1); ++j)
            sum+=*j;
        if(sum==d)
            ways++;
    }
    // result
    std::cout<<ways;
    return 0;
}
