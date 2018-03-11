#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int money, n, m;
    cin>>money>>n>>m;
    vector<int> k_p, u_p;
    for(int i=0; i<n; ++i)
    {
        int s;cin>>s;
        k_p.push_back(s);
    }
    for(int i=0; i<m; ++i)
    {
        int s;cin>>s;
        u_p.push_back(s);
    }
    int best_sum=-1;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            int sum =k_p[i]+u_p[j];
            if(sum>best_sum && sum<=money)
                best_sum=sum;
        }
    }
    cout<<best_sum;
    return 0;
}
