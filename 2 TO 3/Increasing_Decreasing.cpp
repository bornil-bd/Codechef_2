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
    ll flag=0;
    map<ll,ll>mp;
    loop(i,0,a)
    {
        ii(x);
        mp[x]++;
    }
    if(sz(mp)==a)
    {
        yes;
        for(auto &it:mp)
        {
            cout<<it.ff<<" ";
        }
        cout<<v;
    }
    else
    {
        vector<pair<ll,ll>>vc(mp.bb,mp.ee);
        loop(i,0,sz(vc))
        {
            if(vc[i].ss>2 || vc[sz(vc)-1].ss==2)
            {
                no;
                return;
            }
        }
        yes;
        loop(i,0,sz(vc))
        {
            cout<<vc[i].ff<<" ";
            vc[i].ss--;
        }
        for(ll i=sz(vc)-1; i>=0; i--)
        {
            if(vc[i].ss>0)
            {
                cout<<vc[i].ff<<" ";
            }
        }
        cout<<v;
    }
}

int main()
{
    fastio();
    ii(t); ll tc=0;
    while(t--)
    {
        tc++;
        solve(tc);
    }
    return 0;
}