#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    float count_zero = 0, count_plus = 0, count_minus = 0;
    for( int i = 0; i < n; i++ )
    {
        if( arr[i] < 0 )
            count_minus++;
        else if( arr[i] > 0 )
            count_plus++;
        else
            count_zero++;
    }
    cout<<count_plus/n<<endl;
    cout<<count_minus/n<<endl;
    cout<<count_zero/n;
    return 0;
}
