#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, cnt = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b >> c;
        if (c - b >= 2)
        {
            cnt++;
        }
    }
    cout << cnt;
}
//code:https://codeforces.com/problemset/problem/467/A
