#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    int n = 1;

    while (n--)
    {
        int s, t, cnt = 0;
        cin >> s >> t;
        for (int a = 0; a <= s; a++)
        {
            for (int b = 0; b <= s; b++)
            {
                for (int c = 0; c <= s; c++)
                {
                    if (a + b + c <= s && a * b * c <= t)
                    {
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << "\n";
    }
}



