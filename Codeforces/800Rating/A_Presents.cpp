#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    for (int j = 1; j <= a; j++)
    {                               // number input
        for (int i = 0; i < a; i++) // indx input
        {
            if (ar[i] == j)
            {
                cout << i + 1 << " ";
            }
        }
    }

    return 0;
}

// code:https://codeforces.com/problemset/problem/136/A
