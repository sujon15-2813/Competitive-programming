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
        ll t;
    cin >> t;
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
    ll m = sqrt(n);
    if (n == 1 || m * m != n)
    {
        pn;
        return;
    }
    int i;
    ll x = sqrt(m);
    for (i = 2; i <= x; i++)
    {
        if (m % i == 0)
        {
            pn;
            return;
        }
    }
    py;
}





