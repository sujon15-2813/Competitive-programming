#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        // if(a%b==0){
        //     cout<<"0"<<endl;
        // }else{
        //     cout<<b-(a%b)<<endl;
        // }
        cout << ((a % b == 0) ? 0 : (b - (a % b))) << endl;
    }

    return 0;
}
// code:https://codeforces.com/problemset/problem/1328/A