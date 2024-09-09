#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cntA = 0, cntD = 0;
    cin >> n;
    string s;
    cin >> s;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            cntA++;
        } else if (s[i] == 'D') {
            cntD++;
        }
    }

    if (cntA == cntD) {
        cout << "Friendship";
    } else if (cntA > cntD) {
        cout << "Anton";
    } else {
        cout << "Danik";
    }
    
    return 0;
}
//code:https://codeforces.com/problemset/problem/734/A