//  b0rnil
//  feel free to ask any doubt @ bornil.gg@gmail.com
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define pb(a) push_back(a)
#define eb(a) emplace_back(a)
#define vll  vector<ll>
#define check(ans) (ans) ? cout<<"YES"<<'\n' : cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define sz(x) ((x).size())
#define all(x) (x).begin(), (x).end()
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)

void solve()
{
    ll a;
    cin>>a;
    ll l=INT_MAX;
    ll x;
    vll h;
    loop(i,0,a)
    {
        ll p;
        cin>>p;
        h.eb(p);
    }
    sort(all(h));
    loop(i,1,a)
    {
        x=h[i]-h[i-1];
        //cout<<x<<v;
        if(l>x) l=x;
    }
    cout<<l<<v;
}

int main()
{
    fastio();
    test()
    {
        solve();
    }
    return 0;
}