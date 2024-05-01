#include <bits/stdc++.h>
#define str string
#define ll long long
#define by "nothing";
#define pi pair<ll, ll>
#define vec vector<ll>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s, i, n) for (int i = s; i < n; i++)
#define code ios::sync_with_stdio(false);
#define mdsujonislam cin.tie(NULL);
using namespace std;

int main()
{
    code
        mdsujonislam
            ll t = 1;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll l = 1;
        ll r = 2e10;
        ll answer = 0;
        while (l <= r)
        {
            ll mid = l + abs(l - r) / 2;
            ll flag = 0;
            for (ll i = n / 2; i < n; i++)
            {
                if (mid > a[i])
                {
                    flag += abs(a[i] - mid);
                }
                else if (flag >= k)
                {
                    break;
                }
            }
            if (flag <= k)
            {
                l = mid + 1;
                answer = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
