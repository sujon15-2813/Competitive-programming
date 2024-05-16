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
    
    
        solve();
   
    return 0;
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    double d1 = b * log(a);
    double d2 = a * log(b);
    if (d1 > d2)
        cout << '>';
    else if (d1 < d2)
        cout << '<';
    else 
        cout << '=';
}