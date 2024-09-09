#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, cnt = 0;
    cin >> a;
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
        if (ar[i] == 1)
        {
            cnt++;
        }
    }
    if (cnt == 0)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
    return 0;
}
//code:https://codeforces.com/problemset/problem/1030/A