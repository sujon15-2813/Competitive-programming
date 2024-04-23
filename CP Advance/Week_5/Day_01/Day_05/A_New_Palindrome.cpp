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
void palindrome()
{
    str s;
    cin >> s;
    for (ll i = 0; i < (s.size() / 2) - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            py;
            return;
        }
    }
    pn;
}
int main()
{
    code 
    mdsujonislam
    ll t;
    cin >> t;
    while (t--)
    {
        palindrome();
    }
    return 0;
}