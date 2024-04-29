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


bool solve(ll x)
{
    ll ans = cbrt(x);
    for (ll i = 1; i <= ans; i++)
    {
        for (ll j = 1; j <= ans; j++)
        {
            if (i * i * i + j * j * j == x)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    code
    mdsujonislam
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (solve(x))
            py;
        else
            pn;
    }
    return 0;
}