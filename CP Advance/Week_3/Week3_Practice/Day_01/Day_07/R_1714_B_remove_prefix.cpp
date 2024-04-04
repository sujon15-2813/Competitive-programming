#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        map<ll, ll> mp;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] > 1)
            {
                mp[a[i]]--;
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
