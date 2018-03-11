#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
    int pairs = 0;
    for(vector<int>::iterator i=ar.begin(), e=ar.end(); i != e; ++i)
    {
        for(vector<int>::iterator j=i+1; j!= e; ++j)
        {
            if(*i > *j)
            {
                int aux = *i;
                *i = *j;
                *j = aux;
            }
        }
    }
    for(vector<int>::iterator i=ar.begin(), e=ar.end(); i+2<=e; i++)
    {
        if(*i == *(i+1))
        {
            if(i+2<=e)
                i++;
            pairs++;
        }
    }
    return pairs;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
