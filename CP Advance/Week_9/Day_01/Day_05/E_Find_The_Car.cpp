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
ll pow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>a(k+1),b(k+1);
    a[0]=b[0]=0;
    for(int i=1; i<=k; ++i) cin>>a[i];
    for(int i=1; i<=k; ++i) cin>>b[i];
    while(q--)
    {
        ll d;
        cin>>d;
        ll ind=lower_bound(a.begin(),a.end(),d) - a.begin();
        if(a[ind]==d)  cout<<b[ind]<<" ";
        else
        {
            ll dist=a[ind]-a[ind-1];
            ll time=b[ind]-b[ind-1];
            ll x=d-a[ind-1];
            cout<<((x*time)/dist)+b[ind-1]<<" ";
        }
    }
    cout<<endl;
}
int  main()
{
    code by mdsujonislam
    
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        
        solve();
    }
}