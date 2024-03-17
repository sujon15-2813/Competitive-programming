#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i <= c; i++) 
    {
        for (int j = 0; j <= c; j++) 
        {
            int total = i * a + j * b; 
            if (total == c)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}