#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max_diff = -1;
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            int diff = x - i;
            max_diff = max(max_diff, diff);
        }
        cout << max_diff << endl;
    }
    return 0;
}
