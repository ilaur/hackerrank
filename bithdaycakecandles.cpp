#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int h_max = ar[0];
    for( int i = 0; i < n; i++ )
    {
        if( h_max < ar[i] )
            h_max = ar[i];
    }
    int max_count = 0;
    for( int i = 0; i < n; i++ )
    {
        if( h_max == ar[i] )
            max_count++;
    }
    return max_count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
