#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define mdsujonislam cin.tie(NULL);

using namespace std;

void solve(){
    ll a,b,n,s; cin>>a>>b>>n>>s;
    if(s%n>b) pn;
    else if(n*a+b>=s) py;
    else pn;
}

int main(){
    code 
    mdsujonislam
    int t=1;
    cin>>t;
    while(t--) solve();
}