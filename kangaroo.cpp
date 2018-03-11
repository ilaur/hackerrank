#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2,int n = 1) {
    int m1 = x1 + n * v1, m2 = x2 + n * v2;
    if( m1 == m2 )
        return "YES";
    if( n == 10000 )
        return "NO";
    return kangaroo( x1, v1, x2, v2, n + 1 );
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
