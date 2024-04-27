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
    code 
    mdsujonislam
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<ll>());
        ll ans = 0, sum = 0;
        for (ll i = 0; i < k; i++)
        {
            sum += n - a[i];
            if (sum < n)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}