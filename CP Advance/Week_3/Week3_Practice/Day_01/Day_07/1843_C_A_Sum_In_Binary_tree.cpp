#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = 0;
        while (n != 0) {
            ans += n;
            n /= 2;
        }
        cout << ans << endl;
    }

    return 0;
}
//Code:https://codeforces.com/problemset/problem/1843/C