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
    int n;
    cin >> n;
    int ans;
    if (n % 2 == 0)
    {
        ans = n / 2;
        cout << ans << endl;
        for (int i = 0; i < ans; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else if (n == 3)
    {
        cout << 1 << endl;
        cout << 3 <<endl;
    }
    else
    {
        n = n - 3;
        ans = n / 2;
        cout << ans + 1 << endl;
        for (int i = 0; i < ans; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
}