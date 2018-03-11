#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    long long min_sum, max_sum;
    for( int i = 0; i < 5; i++ )
    {
        long long sum = 0;
        for( int j = 0; j < 5; j++ )
        {
            if( i != j )
                sum += arr[j];
        }
        if( i == 0 )
        {
            min_sum = sum;
            max_sum = sum;
        }
        else
        {
            if( min_sum > sum )
                min_sum = sum;
            else if( max_sum < sum )
                max_sum = sum;
        }
    }
    cout<<min_sum<<' '<<max_sum;
    return 0;
}
