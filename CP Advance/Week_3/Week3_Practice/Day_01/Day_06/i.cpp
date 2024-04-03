#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) {
        ll n, sum = 0;
        cin >> n;

        vector<ll> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        priority_queue<ll> pq;
        pq.push(0);

        for(int i = 0; i < n; i++) {
            if(!a[i]) {
                sum += pq.top();
                if(pq.top())
                    pq.pop();
            }
            else
                pq.push(a[i]);
        }

        cout << sum << endl;
    }
    return 0;
}
