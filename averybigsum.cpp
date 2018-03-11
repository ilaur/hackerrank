#include <bits/stdc++.h>

using namespace std;

long long aVeryBigSum(int n, vector <long> ar) {

    long long sum = 0;
    for( int ar_i = 0; ar_i < n; ar_i++ )
        sum += ar[ar_i];
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector< long > ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}
