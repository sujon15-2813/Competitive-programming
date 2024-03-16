#include <iostream>
using namespace std;

int main() {
    int a, b, t;
    cin >> a >> b >> t;
    
    int time = (t + 0.5) / a;
    int biscuits = time * b;
    
    cout << biscuits << endl;

    return 0;
}
