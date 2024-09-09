#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[250];
    int n , p , q;
    cin >> n >> p;
    int cnt = 0;

    for(int i =  0 ; i < p ; i++){
        cin >> ar[i];
    }
    cin >> q;
    for(int i = p ; i < p + q ; i++){
        cin >> ar[i];
    }

    sort(ar , ar+(p+q));

    for(int i = 0 ; i < p+q ; i++){
        if(ar[i] != ar[i+1]){
            cnt++;
        }
    }

    if(n == (cnt)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}

// code:https://codeforces.com/problemset/problem/469/A