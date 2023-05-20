//  b0rnil
//  feel free to ask a doubt @ bornil.gg@gmail.com
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define pb(a) push_back(a);
#define check(ans) (ans) ? cout<<"YES"<<'\n' : cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define sz(x) ((x).size())
#define all(x) (x).begin(), (x).end()
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)

void solve()
{
    ll a,b,c,count=0;
    cin>>a>>b>>c;
    ll x[300]={0};
    loop(i,0,a)
    {
        ll o;
        cin>>o;
        ll m=99+o-(b*c);
        ll n=99+o+(b*c);
        loop(i,m,n+1)
        {
            x[i]=1;
        }
    }
    loop(i,100,200)
    {
        if(x[i]==0) count++;
    }
    cout<<count<<v;
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