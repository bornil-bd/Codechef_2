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
    vll b;
    vll ans(2*a,0);
    loop(i,0,2*a)
    {
        ii(x)
        b.pb(x);
    }
    sort(all(b));
    ll j=0;
    for(ll i=0; i<2*a; i=i+2)
    {
        ans[i]=b[j];
        j++;
    }
    for(ll i=1; i<2*a; i=i+2)
    {
        ans[i]=b[j];
        j++;
    }
    cout<<ans[a]<<v;
    //cout<<sz(ans)<<v;
    for(auto& it:ans)
    {
        cout<<it<<" ";
    }
    cout<<v;

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