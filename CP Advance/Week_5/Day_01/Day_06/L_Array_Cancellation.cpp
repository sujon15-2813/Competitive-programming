#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define mdsujonislam cin.tie(NULL);
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll pos_val = 0;
        ll neg_val = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            if (x >= 0)
            {
                pos_val += x;
            }
            else
            {
                if (pos_val + x >= 0)
                {
                    pos_val += x;
                }
                else
                {
                    x += pos_val;
                    pos_val = 0;
                    neg_val += x;
                }
            }
        }
        cout << -neg_val << endl;
    }
    return 0;
}