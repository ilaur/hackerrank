#include <iostream>
#include <vector>
#include <algorithm>

typedef std::vector<int> vec;
typedef std::vector<int>::iterator itr;

int iMin(std::vector<int> v);

int main()
{
    int n;
    std::cin>>n;
    vec v;
    for(int i=0; i<n; ++i)
    {
        int val; std::cin>>val;
        v.push_back(val);
    }
    std::cout<<iMin(v);
    return 0;
}

int iMin(std::vector<int> v)
{
    itr end=v.end(), beg=v.begin(), piv;
    std::sort(beg, end);
    vec elems;
    int sz = 0;
    for(;beg != end; ++beg)
    {
        piv = beg;
        vec nums;
        while(beg != end)
        {
            ++beg;
            int diff = abs(*beg - *piv);
            if(diff <= 1)
                nums.push_back(*beg);
        }
        beg = piv;
        if(v.size()%2==0)
            nums.push_back(*beg);
        if(sz < nums.size())
            sz = nums.size();
    }
    return sz;
}
