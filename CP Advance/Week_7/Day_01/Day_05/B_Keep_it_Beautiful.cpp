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
        ll n;
        cin >> n;
        vector<ll> a;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ll sum = cnt + (!a.empty() && a.back() > x);
            if (sum == 0 || (sum == 1 && x <= a[0]))
            {
                a.pb(x);
                cnt = sum;
                cout << '1';
            }
            else
            {
                cout << '0';
            }
        }
        cout << endl;
    }
    return 0;
}
