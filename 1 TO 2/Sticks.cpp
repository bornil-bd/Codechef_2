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
#define pq priority_queue
#define ff first
#define ss second
#define check(ans) (ans) ? cout<<"YES"<<'\n' : cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define sz(x) (ll)((x).size())
#define all(x) (x).begin(), (x).end()
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)

void solve()
{
    ll a;
    cin>>a;
    map<ll,ll>mp;
    loop(i,0,a)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    pq<pair<ll,ll>>q;
    for(auto &it:mp)
    {
        if(it.ss>=2)
        {
            q.push({it.ff,it.ss});
        }
    }
    ll area=-1;
    if(q.top().ss>=4)
    {
        area=q.top().ff*q.top().ff;
    
    }
    else if(sz(q)>1)
    {
        ll temp=q.top().ff;
        q.pop();
        ll temp2=q.top().ff;
        area=temp*temp2;
    }
    cout<<area<<v;
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