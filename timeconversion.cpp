#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    string hh = s.substr(0,2);
    string mm = s.substr(3,2);
    string ss = s.substr(6,2);
    string meridian = s.substr(8,2);
    if( meridian == "AM" )
    {
        int hour = stoi(hh);
        if( hour == 12 )
            hour = 0;
        hh = '0'+to_string(hour);
    }
    else if( meridian == "PM" )
    {
        int hour = stoi(hh);
        if( hour != 12 )
            hour += 12;
        hh = to_string(hour);
    }
    return hh+':'+mm+':'+ss;
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
