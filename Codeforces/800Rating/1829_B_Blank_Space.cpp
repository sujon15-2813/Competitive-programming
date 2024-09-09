#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> v;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                cnt++;
            }
            else
            {
                v.push_back(cnt);
                cnt = 0;
            }
        }
        v.push_back(cnt);
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        cout << v[0] << endl;
    }
}