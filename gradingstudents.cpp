#include <bits/stdc++.h>

using namespace std;

typedef vector<int>::iterator itr;

vector < int > solve(vector < int > grades){

    for( itr i = grades.begin( ); i != grades.end( ); ++i )
    {
        if( *i >= 38 )
        {
            int mul = *i / 5;
            mul *= 5;
            if( mul < *i )
                mul += 5;
            if( mul - *i < 3 )
                *i = mul;
        }
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    return 0;
}
