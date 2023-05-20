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
    string a,b;
    cin>>a;
    cin>>b;
    ll flag=0;
    loop(i,0,sz(a))
    {
        if(a[i]!=b[i])
        {
            if(a[i]!='?' && b[i]!='?')
            {
                flag=1;
                break;
            }
        }
    }
    check(flag==0);
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