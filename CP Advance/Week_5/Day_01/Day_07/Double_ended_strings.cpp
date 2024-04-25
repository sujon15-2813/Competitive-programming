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
int lcs(string X, string Y, int m, int n)
{
    int L[m + 1][n + 1];
    int ans = 0;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
            {
                L[i][j] = L[i - 1][j - 1] + 1;
                ans = max(ans, L[i][j]);
            }
            else
                L[i][j] = 0;
        }
    }
    return ans;
}
int main()
{
    code 
    mdsujonislam
    int t;
    cin >> t;
    while (t--)
    {
        string X, Y;
        cin >> X >> Y;
        int m = X.length();
        int n = Y.length();
        int ls = lcs(X, Y, m, n);
        int res = (m - ls) + (n - ls);
        cout << res << endl;
    }
    return 0;
}