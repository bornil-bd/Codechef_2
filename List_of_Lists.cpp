//  b0rnil
//  feel free to ask any doubt @ bornil.gg@gmail.com
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define ii(a) ll a; cin>>a;
#define string(a) string a; cin>>a;
#define pb(a) emplace_back(a)
#define vll  vector<ll>
#define pq priority_queue
#define mpp make_pair
#define ff first
#define ss second
#define check(ans) (ans) ? cout<<"YES"<<'\n' : cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define sz(x) (ll)((x).size())
#define bb begin()
#define ee end()
#define all(x) (x).begin(), (x).end()
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
//#define test() ull t;cin>>t;while(t--)

void solve(ll tc)
{
    ii(a)
    map<ll,ll>mp;
    loop(i,0,a)
    {
        ii(x)
        mp[x]++;
    }
    if(a==1)
    {
        cout<<"0"<<v;
        return;
    }
    ll mx=INT_MIN, val=0;
    for(auto& it:mp)
    {
        if(it.ss>mx)
        {
            mx=it.ss;
            val=it.ff;
        }
    }
    ll ans=0;
    bool ok=false;
    if(mx>1) ok=true;
    if(sz(mp)>1) ans++;
    for(auto &it:mp)
    {
        if(it.ff!=val) ans+=it.ss;
    }
    if(!ok) cout<<"-1"<<v;
    else cout<<ans<<v;
}

int main()
{
    fastio();
    ii(t); ll tc=0;
    while(t--)
    {
        tc++;
        solve(tc);
        cout<<flush;
    }
    return 0;
}