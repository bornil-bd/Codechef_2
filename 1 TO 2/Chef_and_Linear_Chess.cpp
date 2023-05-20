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
    ll m=INT_MAX,pos=-1;
    ll a,b;
    cin>>a>>b;
    loop(i,0,a)
    {
        ll x;
        cin>>x;
        if(b%x==0)
        {
            if(m>(b/x))
            {
                m=b/x;
                pos=x;
            }
        }
    }
    cout<<pos<<v;
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