//  b0rnil
//  feel free to ask any doubt @ bornil.gg@gmail.com
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define ll(a) ll a; cin>>a;
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
int cmp(pair<ll,ll>a, pair<ll,ll>b)
{
    return a.ss>b.ss;
}
void solve(ll tc)
{
    ll(a);
    map<ll,ll>mp;
    loop(i,0,a)
    {
        ll(x)
        mp[x]++;
    }
    pq<ll>pqq;
    for(auto &it:mp)
    {
        pqq.push(it.ss);
    }
    if(sz(pqq)==1) 
    {
        cout<<(ll)ceil(pqq.top()/2.00)<<v;
        //cout<<pqq.top()<<v;
    }
    else
    {
        ll f=pqq.top();
        pqq.pop();
        ll s=pqq.top();
        //pqq.pop();
        cout<<max((ll)ceil(f/2.00),s)<<v;
    }
    
}

int main()
{
    fastio();
    ll(t); ll tc=0;
    while(t--)
    {
        tc++;
        solve(tc);
    }
    return 0;
}