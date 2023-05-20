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
    vll vc;
    ll pos,pos2,d;
    ll s=d=0;
    ll m=INT_MAX;
    loop(i,0,a)
    {
        ii(x);
        vc.pb(x);
    }
    loop(i,0,a)
    {
        if(i!=a-1)
        {
            s=abs(vc[i+1]-vc[i]);
            {

            }
        }
        if(i!=0)
        {
            d=abs(vc[i-1]-vc[i]);
            // {
            //     if(s<m)
            //     {
            //         m=s;
            //         cout<<m<<v;
            //         if(vc[i-1]<vc[i])
            //         {
            //             pos=i-1;
            //         }
            //         else pos=i;
            //     }
            // }
        }
        ll k=max(s,d);
        if(k<m)
        {
            m=k;
            pos=i;
        }
    }
    // cout<<pos<<v;
    // cout<<vc[pos]<<v<<v<<v;
    if(pos==0) cout<<abs(vc[0]-vc[1])<<v;
    else if(pos==a-1) cout<<abs(vc[a-2]-vc[a-1])<<v;
    else cout<<max(abs(vc[pos]-vc[pos-1]),abs(vc[pos]-vc[pos+1]))<<v;
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