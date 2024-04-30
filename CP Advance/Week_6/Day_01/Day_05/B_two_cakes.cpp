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
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    int x = min(a, b);
    for (int i = 1; i <= x; i++)
    {
        if (a / i + b / i >= n)
        {
            ans = i;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}