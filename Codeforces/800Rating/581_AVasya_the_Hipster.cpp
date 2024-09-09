#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << b << " ";
    }
    else
    {

        cout << a << " ";
    }
    int ans = abs(a - b);
    cout << ans / 2;
}
// https://codeforces.com/problemset/problem/581/A
//  581A. Vasya the Hipster