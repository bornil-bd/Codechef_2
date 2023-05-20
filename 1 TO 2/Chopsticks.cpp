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
#define loop2(a,b,c) for(ull(a)=(b); (a)>=(c); (a)--)
#define test() ull t;cin>>t;while(t--)


int main()
{
    fastio();
    ll a,b,count=0;
    cin>>a>>b;
    vll vc;
    loop(i,0,a)
    {
        ll x;
        cin>>x;
        vc.eb(x);
    }
    sort(all(vc));
    // for(auto &it:vc)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<v;
    loop(i,0,a-1)
    {
        if(vc[i+1]-vc[i]<=b)
        {
            count++;
            i++;
        }
    }
    cout<<count<<v;
    return 0;
}