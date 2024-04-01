#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> diffs(n, 0);
        ll sum(0);

        for (ll p = 0; p < n; p++)
        {
            ll cur = (s[p] == 'L') ? p : n - p - 1;
            ll mx = (p > (n - p - 1)) ? p : (n - p - 1);
            sum += cur;
            ll diff = mx - cur;
            diffs[p] = diff;
        }

        sort(diffs.rbegin(), diffs.rend());

        for (ll p = 0; p < n; p++)
        {
            sum += diffs[p];
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
