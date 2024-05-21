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

void solve(ll n);
int main()
{
   code by mdsujonislam
    ll n;
    cin >> n;
    solve(n);
  
    return 0;
}
void solve(ll n)
{
   
    if (n == 1)
    {
        cout << 1;
        return;
    }
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return;
    }
    if (n % 2 == 0)
    {
        for (ll i = 2; i <= n; i += 2) 
        {
            cout << i << " ";
        }
        for (ll i = 1; i < n; i += 2) 
        {
            cout << i << " ";
        }
    }
    else
    {
        for (ll i = n - 1; i > 0; i -= 2) 
        {
            cout << i << " ";
        }
        for (ll i = n; i > 0; i -= 2) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}