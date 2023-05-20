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
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
#define sz(x) (ll)((x).size())
#define all(x) (x).begin(), (x).end()
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define loop2(a,b,c) for(ull(a)=(b); (a)>=(c); (a)--)
#define test() ull t;cin>>t;while(t--)

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll h=INT_MIN;
    loop(i,0,a-1)
    {
        ll x;
        cin>>x;
        if(x>h) h=x;  
    }
    ll d;
    cin>>d;
    if(d>h) yes;
    else if((d+((c-1)*b))>h) yes;
    else no;
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