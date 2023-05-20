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
    ll a,tt=0,count=0;
    cin>>a;
    string s;
    cin>>s;
    if(a==1)
    {
        cout<<"1"<<v;
        return;
    }
    loop(i,0,a)
    {
        if(i==0)
        {
            if(s[i]=='0' && s[i+1]=='0') 
            {
                count++;
                //s[i]='1';
                i++;
            }
        }
        else if(i==(a-1))
        {
            if(s[i]=='0' && s[i-1]=='0') count++;
        }
        else
        {
            if(s[i]=='0' && s[i-1]=='0' && s[i+1]=='0')
            {
                count++;
                i++;
            }
        }
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