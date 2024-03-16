#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = b - a + 1;
    if (a < b)
    {
        cout << cnt << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}