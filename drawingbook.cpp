#include <bits/stdc++.h>

using namespace std;

int min(int num1, int num2)
{
    return num1 <= num2 ? num1 : num2;
}

int solve(int n, int p){
    int left_count=0, right_count=0;
    if(n%2==0)
    {
        for(int i=1; i<=n; i+=2)
        {
            if(i>1)
            {
                if(i<p && i-1<p)
                    left_count++;
                else if(i>p && i-1>p)
                    right_count++;
                else
                {
                    if(p>n/2)
                        right_count++;
                    else
                        left_count++;
                }
            }
        }
    }
    else
    {
        for(int i=1; i<n; i+=2)
        {
            if(i>1)
            {
                if(i<p && i-1<p)
                    left_count++;
                else if(i>p && i-1>p)
                    right_count++;
                else
                {
                    if(p>n/2)
                        right_count++;
                    else
                        left_count++;
                }
            }
        }
    }
    return min(left_count, right_count);
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
