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

void solve()
{
    ll a,b;
    cin>>a>>b;
    ll n;
    if(b<=a/2) n=b;
    else n=(a-b);
    vll vc(a);
    ll sum1=0,sum2=0;
    loop(i,0,a)
    {
        cin>>vc[i];
        sum2+=vc[i];
    }
    sort(all(vc));
    
    loop(i,0,n)
    {
        sum1+=vc[i];
    }
    cout<<sum2-2*sum1<<v;
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