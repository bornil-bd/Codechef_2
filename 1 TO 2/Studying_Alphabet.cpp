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
#define check(ans) (ans) ? cout<<"Yes"<<'\n' : cout<<"No"<<'\n'
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
    ll a;
    cin>>a;
    while(a--)
    {
        ll flag,sin=0;
        string st;
        cin>>st;
        loop(i,0,sz(st))
        {
            flag=0;
            loop(j,0,sz(s))
            {
                if(st[i]==s[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                sin=1;
                break;
            }
        }
        check(sin==0);
    }
}

int main()
{
    fastio();
    solve();
    return 0;
}