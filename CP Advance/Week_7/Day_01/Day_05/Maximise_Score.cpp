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
        mdsujonislam int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // calculating differences between adjacent elements
        vector<int> differences(n - 1);
        for (int i = 0; i < n - 1; i++) // all difference calculate
        {
            differences[i] = abs(a[i] - a[i + 1]);
        }
        int optimal_score = INT_MAX;
        // alice picks the first element
        if (n >= 2)
        {
            optimal_score = min(optimal_score, differences[0]);
        }
        // alice picks the last element
        if (n >= 2)
        {
            optimal_score = min(optimal_score, differences[n - 2]);
        }
        // alice pick the middle element
        for (int i = 1; i < n - 1; i++)
        {
            int max_difference = max(differences[i - 1], differences[i]);
            optimal_score = min(optimal_score, max_difference);
        }
        cout << optimal_score << endl;
    }
}