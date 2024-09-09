#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, cnt1 = 0, cnt2 = 0;
    cin >> a>> b;
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        if (arr[i] <= b) 
        {
            cnt1++;
        }
        else
        {
            cnt2+=2;
        }
    }
    cout << cnt1 + cnt2;
    return 0;
}

// code:https://codeforces.com/problemset/problem/677/A