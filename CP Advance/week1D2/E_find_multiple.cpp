#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            cnt = i;
            break;
        }
    }
    if (cnt != 0)
    {
        cout << cnt << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}
