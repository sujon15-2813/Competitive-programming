#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, cnt = 1; // n=1 cz it srt 1
    cin >> a;
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < a - 1; i++)
    {
        if (ar[i] != ar[i + 1])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

// code:https://codeforces.com/problemset/problem/344/A
