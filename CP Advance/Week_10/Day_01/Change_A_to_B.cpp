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

int main()
{
    code by mdsujonislam
    int T;
    cin >> T;

    while (T--)
    {
        long long A, B, K;
        cin >> A >> B >> K;

        int res = 0;
        while (true)
        {
            if (B % K == 0 && B / K >= A)
            {
                res++;
                B = B / K;
            }
            else if (B % K == 0)
            {
                res = res + B - A;
                break;
            }
            else
            {
                res = res + B % K;
                B = B - B % K;
            }
        }
        cout << res << endl;
    }
    return 0;
}