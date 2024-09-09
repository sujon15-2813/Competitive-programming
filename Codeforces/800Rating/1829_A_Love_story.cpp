#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int diffcnt = 0;
        
        for (int i = 0; i < 10; ++i) {
            if (s[i] != "codeforces"[i]) 
                diffcnt++;
        }
        
        cout <<diffcnt<< endl;
    }
    
    return 0;
}
