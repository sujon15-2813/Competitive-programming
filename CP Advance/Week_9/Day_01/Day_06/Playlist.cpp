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
#define mdsujonislam cin.tie(NULL);
using namespace std;

void solve();
int main()
{
    code by mdsujonislam
    
    ll t = 1;
   
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    set<ll> s;
    ll i = 0, j = 0;
    while (i < n && j < n)
    {
        while (j < n && !s.count(a[j]))
        {
            s.insert(a[j]);
            ans = max(ans, j - i + 1);
            j++;
        }
        while (j < n && s.count(a[j]))
        {
            s.erase(a[i]);
            i++;
        }
    }
    cout << ans << endl;
    return;
}