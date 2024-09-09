#include<bits/stdc++.h>
using namespace std;
int dis[3];//dis meas location 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> dis[0] >> dis[1] >> dis[2];
    sort(dis, dis + 3);
    cout << dis[2] - dis[0];
}
//https://codeforces.com/problemset/problem/723/A
// 723 A. The New Year: Meeting Friends