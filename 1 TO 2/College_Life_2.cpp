//  b0rnil
//  feel free to ask any doubt @ bornil.gg@gmail.com
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define pb(a) push_back(a)
#define vt  vector<ll>
#define eb(a) emplace_back(a)
#define check(ans) (ans) ? cout<<"YES"<<'\n' : cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define sz(x) ((x).size())
#define all(x) (x).begin(), (x).end()
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)

void solve()
{
    ll a,total_time=0;
    cin>>a;
    vt b(a);
    loop(i,0,a) cin>>b[i];
    loop(i,0,a)
    {
        ll n;
        cin>>n;
        ll sum=0;
        loop(j,0,n)
        {
            ll x;
            cin>>x;
            sum+=x;
        }
        sum=sum-((n-1)*b[i]);
        total_time+=sum;
    }
    cout<<total_time<<v;
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