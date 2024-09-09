#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,a;
    cin>>s>>a;
    reverse(s.begin(),s.end());//reverse the word
    if(s==a){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    
    return 0;
}
//code:https://codeforces.com/problemset/problem/41/A