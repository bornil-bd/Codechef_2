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
    string s;
    ll on=0,tw=0,th=0,fo=0;
    cin>>s;
    if(sz(s)>9)
    {
        loop(i,0,sz(s))
        {
            if(s[i]>='A' && s[i]<='Z' && i!=0 && i!=sz(s)-1) tw=1;
            if(s[i]>='0' && s[i]<='9' && i!=0 && i!=sz(s)-1) th=1;
            if((s[i]=='@' || s[i]=='#' || s[i]=='%' || s[i]=='&' || s[i]=='?') && i!=0 && i!=sz(s)-1) fo=1;
            if(s[i]>='a' && s[i]<='z') on=1;
        }
        //cout<<on<<" "<<tw<<" "<<th<<" "<<fo<<v;
        check(tw==1 && th==1 && fo==1 && on==1);
    }
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