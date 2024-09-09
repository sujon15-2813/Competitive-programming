#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int cnt_A = 0, cnt_B = 0;
        for (char c : s)
        {
            if (c == 'A')
                cnt_A++;
            else
                cnt_B++;
        }

        if (cnt_A > cnt_B)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}

// code:https://codeforces.com/problemset/problem/1926/A