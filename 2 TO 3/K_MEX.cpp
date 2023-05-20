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
#define loop(a,b,c) for(ll (a)=(b); (a)<(c); (a)++)
//#define test() ull t;cin>>t;while(t--)

void solve(ll tc)
{
    ll i;
    ii(a) ii(b) ii(c)
    map<ll,ll> mp;
    for(i=0; i<a; i++)
    {
        ii(x)
        mp[x]++;
    }
    if(b<c)
    {
        no;
        return ;
    }
    for(i=0; i<c; i++)
    {
        if(!mp[i])
        {
           // n=i+1;
            break;
        }
    }
    //cout<<i<<v;
    if(i<c) no;
    else
    {
        if(a-mp[c]>=b) yes;
        else no;
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