#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s, cnt = 0;
    cin >> k >> s;
    for (int a = 0; a <= k; a++)
    {
        for (int b = 0; b <= k; b++)
        {
            int c = s - (a + b);
            if (c >= 0 && c <= k)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
