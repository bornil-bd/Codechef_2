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
    cin>>s;
    if(sz(s)>4)
    {
        loop(i,0,sz(s)-4)
    {
        if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y')
        {
            s[i+2]='w';
            s[i+3]='r';
            s[i+4]='i';
            i=i+3;
        }
    }
    }
    cout<<s<<v;
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