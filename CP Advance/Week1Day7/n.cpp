#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    ll total = n * (n + 1) / 2;
    ll sum = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    ll m_num = total - sum;
    cout << m_num << endl;
    return 0;
}
