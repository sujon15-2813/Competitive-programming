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
        ll a, b, n;
        cin >> a >> b >> n;
        ll sum = 0;
        if (b >= a)
            sum = a;
        else
            sum = b;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] + 1 <= a)
            {
                sum += arr[i];
            }
            else
            {
                sum += a - 1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}