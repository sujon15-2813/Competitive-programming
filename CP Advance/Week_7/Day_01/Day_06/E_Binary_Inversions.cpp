#include <bits/stdc++.h>
#define str string
#define ll long long
#define by "\n";
#define pi pair<ll, ll>
#define vec vector<ll>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s, i, n) for (int i = s; i < n; i++)
#define code ios::sync_with_stdio(false);
#define MdSujonIslam cin.tie(NULL);
using namespace std;
ll solve(vector<ll> a, ll n)
{
    ll one = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            one++;
        }
        else
        {
            ans += one; 
        }
    }
    return ans;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll res = solve(a, n);
        ll cnt = -1;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0) 
            {
                a[i] = 1;
                cnt = i;
                break;
            }
        }
        res = max(res, solve(a, n));
        if (cnt != -1)
        {
            a[cnt] = 0;
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1) 
                a[i] = 0;
                cnt = i;
                break;
            }
        }
        res = max(res, solve(a, n));
        cout << res << endl;
    }
    return 0;
}