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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vec a(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
       vec b(n + 2, 0);
        for (ll i = 1; i <= n; i++)
        {
            b[i] = (a[i] + b[i - 1]);
        }
        vec ans(q);
        vector<pair<ll, ll>> qry(q);
        for (ll i = 0; i < q; i++)
        {
            cin >> qry[i].first;
            qry[i].second = i;
        }
        sort(qry.begin(), qry.end());
        ll cnt = 0;
        for (ll i = 0; i < q; i++)
        {
            while (cnt < n && a.at(cnt + 1) <= qry[i].first)
            {
                cnt++;
            }
            ans[qry[i].second] = b[cnt];
        }
        for (ll i = 0; i < q; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}