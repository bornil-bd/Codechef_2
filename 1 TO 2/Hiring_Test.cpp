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
    ll a ,b;
    cin>>a>>b;
    ll c,d;
    cin>>c>>d;
    string res;
    loop(i,0,a)
    {
        ll full=0,half=0;
        string s;
        cin>>s;
        loop(i,0,b)
        {
            if(s[i]=='F') full++;
            if(s[i]=='P') half++;
        }
        if((full>=c) || (full>=(c-1) && half>=d)) res+='1';
        else res+='0';
    }
    cout<<res<<v;
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