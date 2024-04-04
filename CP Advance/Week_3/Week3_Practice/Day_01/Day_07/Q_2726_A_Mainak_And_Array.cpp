#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, mx = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i < n; i++)
            mx = max(mx, a[i] - a[0]);
        for (int i = 0; i < n - 1; i++)
            mx = max(mx, a[n - 1] - a[i]);
        for (int i = 1; i < n; i++)
            mx = max(mx, a[i - 1] - a[i]);
        cout << mx << endl;
    }

    return 0;
}
//code:https://codeforces.com/problemset/problem/1726/A