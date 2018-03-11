#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
    int n, height=0, num=0;cin>>n;
    string s;cin>>s;
    for(int i=0; i<n; ++i)
    {
        if(height==0 && s[i]=='D')
            num++;
        if(s[i]=='D')
            height--;
        else
            height++;
    }
    cout<<num;
    return 0;
}
