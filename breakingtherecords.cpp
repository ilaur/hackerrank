#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

typedef std::vector<int> vec;
typedef std::vector<int>::iterator itr;

int main() {
    int n; std::cin>>n;
    vec v;
    for(int i=0; i<n; ++i)
    {
        int val; std::cin>>val;
        v.push_back(val);
    }
    int ls=v[0], hs=v[0];
    int pass_l=0, pass_h=0;
    for(itr i=v.begin(), e=v.end(); i!=e; ++i)
    {
        if(*i > hs)
        {
            pass_h++;
            hs = *i;
        }
        else if(*i < ls)
        {
            pass_l++;
            ls = *i;
        }
    }
    std::cout<<pass_h<<' '<<pass_l;
    return 0;
}
