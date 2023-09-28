#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,m;
    cin>>n>>m;
    set<ll>st;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        st.insert(x);
    }
    map<ll,string>m1,m2;
    for(ll i=0; i<m; i++)
    {
        ll a,b;
        string s;
        cin>>a>>b>>s;
        if(st.find(a)!=st.end()) m1[b*-1]=s;
        else m2[b*-1]=s;
    }
    for(auto x:m1) cout<<x.second<<endl;
    for(auto x:m2) cout<<x.second<<endl;
	// your code goes here
	return 0;
}
