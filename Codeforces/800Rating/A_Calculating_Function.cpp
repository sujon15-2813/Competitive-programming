#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  a, d;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a / 2;
    }
    else
    {
        d = -(a / 2 + 1);
        cout << d;
    }
    return 0;
}
// code:https://codeforces.com/problemset/problem/486/A