#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a, b;
    cin >> a >> b;
    ll length = 0;
    while (a <= b)
    {

        a *= 2;
        length++;
    }
    cout << length << endl;
    return 0;
}