#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }

    int sum_d1 = 0, sum_d2 = 0;
    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ )
        {
            if( i == j )
                sum_d1 += a[i][j];
            if( j == (n - 1) - i )
                sum_d2 += a[i][(n - 1) - i];
        } //j
    } //i
    int diff = abs( sum_d1 - sum_d2 );
    cout<<diff;
    return 0;
}
