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
    int t;
    cin >> t;
    while (t--)
    {
        str s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                if (zero > 0)
                {
                    zero--;
                }
                else
                {
                    break;
                }
            }

            else
            {
                if (one > 0)
                {
                    one--;
                }
                else
                {
                    break;
                }
            }
        }
        cout << one + zero << endl;
    }
    return 0;
}
