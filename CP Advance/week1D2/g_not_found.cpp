#include<bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    bool flag = true;
    for (int i = 0; i < s.size() - 1; i++) { 
        if (s[i + 1] - s[i] > 1) { 
            char c = s[i] + 1;
            cout << c;
            flag = false;
            break;
        }
    }
    
    if (flag) {
        cout << "None";
    }
    return 0;
}
