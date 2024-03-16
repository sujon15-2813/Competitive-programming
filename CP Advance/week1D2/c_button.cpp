#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    int mn = min(a, b);
    int sum = mx;
    if (mx - 1 > mn)
    {
        sum += (mx - 1);
    }
    else
    {
        sum += mn;
    }

    cout << sum << "\n";
    return 0;
}
