#include <bits/stdc++.h>
#define str string
#define ll long long
#define by "nothing";
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
int main()
{
    code
        mdsujonislam
         int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n+3], b[n+3];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        int ans = 0;
        for (int i = n-1; i >= 0; i--)
        {
           
            if (a[i]>b[i]  ||  b[i]-a[i] >1)
            {
                ans=1;
                break;
            }
        }
        if(ans==0){
            py;
        }else{
            pn;
        }
    }
    return 0;
}