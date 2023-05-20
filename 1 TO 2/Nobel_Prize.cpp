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
    ll a,b,flag=0;
    cin>>a>>b;
    vector<ll>vc(b,0);
    loop(i,0,a)
    {
        ll x;
        cin>>x;
        vc[x-1]++;
    }
    // loop(i,0,b)
    // {
    //     cout<<vc[i]<<" ";
    // }
    // cout<<v;
    loop(i,0,b)
    {
        if(vc[i]==0)
        {
            flag=1;
            break;
        }
    }
    check(flag==1);
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