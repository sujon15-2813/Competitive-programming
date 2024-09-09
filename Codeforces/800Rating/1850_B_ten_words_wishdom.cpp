#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll currWinner = 0, pos = 0;

        for (int i = 0; i < n; i++)
        {
            ll m, q;
            cin >> m >> q;

            if (m <= 10)
            {
                if (q > currWinner)
                {
                    currWinner = q;
                    pos = i + 1;
                }
            }
        }

        cout << pos << endl;
    }

    return 0;
}

// code:https://codeforces.com/problemset/problem/1850/B