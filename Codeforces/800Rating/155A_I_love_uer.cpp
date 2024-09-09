#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, cnt = 0;
    cin >> a;
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
    }
    int mx = ar[0];
    int mn = ar[0];
    for (int i = 0; i < a; i++)
    // {
    //     if(ar[i]>mx){
    //         mx=ar[i];
    //         cnt++;
    //     }if(ar[i]<mn){
    //         mn=ar[i];
    //         cnt++;
    //     }
    // }
     {
        mx = (ar[i] > mx) ? ar[i] : mx;
        mn = (ar[i] < mn) ? ar[i] : mn;
        cnt += (ar[i] > mx || ar[i] < mn) ? 1 : 0;
    }
    cout<<cnt;

    return 0;
}
// code:https://codeforces.com/problemset/problem/155/A