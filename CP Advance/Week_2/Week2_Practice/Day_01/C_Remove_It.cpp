// #include <iostream>

// using namespace std;

// int main() {
//     // Read input values
//     int N, X;
//     cin >> N >> X;

//     // Declare an array to store input elements
//     int A[N];
//     for (int i = 0; i < N; ++i) {
//         cin >> A[i];
//     }

//     // Print the elements of A_prime (excluding X)
//     bool printed = false;
//     for (int i = 0; i < N; ++i) {
//         if (A[i] != X) {
//             if (printed) {
//                 cout << " ";
//             }
//             cout << A[i];
//             printed = true;
//         }
//     }
//     cout << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    int ar[n];
    for (int i = 0; i <n; i++)
    {
        cin>>ar[i];
    }
    
    bool flag = false;
    for (int i = 0; i < n; ++i) {
        if (ar[i] != x) {
            if (flag) {
                cout << " ";
            }
            cout << ar[i];
            flag = true;
        }
    }
    cout << endl;

    return 0;
    
}
