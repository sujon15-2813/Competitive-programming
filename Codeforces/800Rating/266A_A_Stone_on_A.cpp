#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b=0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            b++;
        }
    }
    cout << b;
}
//code:https://codeforces.com/problemset/problem/266/A