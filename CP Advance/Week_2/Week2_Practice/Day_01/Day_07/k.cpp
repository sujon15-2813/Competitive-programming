#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<pair<int, string>> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i].first >> s[i].second;

        for (int i = 0; i < n; i++)
        {
            int ans = 0;
            for (int j = 0; j < s[i].first; j++)
            {
                if (s[i].second[j] == 'D')
                {
                    if (a[i] == 9)
                        a[i] = 0;
                    else
                        a[i]++;
                }
                else if (s[i].second[j] == 'U')
                {
                    if (a[i] == 0)
                        a[i] = 9;
                    else
                        a[i]--;
                }
            }
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
