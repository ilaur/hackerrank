#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

typedef vector< int >::iterator itr;

int main(){
    int s;
    int t;
    cin >> s >> t; //house interval
    int a;
    int b;
    cin >> a >> b; //tree pos
    int m;
    int n;
    cin >> m >> n; //no. of apples/no. of oranges
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }

    int count_apples = 0, count_oranges = 0;
    for( itr i = apple.begin( ), end = apple.end( ); i != end; ++i )
    {
        int fall = a + *i;
        if( fall >= s && fall <= t )
            count_apples++;
    }
    for( itr i = orange.begin( ), end = orange.end( ); i != end; ++i )
    {
        int fall = b + *i;
        if( fall >= s && fall <= t )
            count_oranges++;
    }
    cout<<count_apples<<endl;
    cout<<count_oranges;
    return 0;
}
