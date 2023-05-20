//  b0rnil
//  feel free to ask any doubt @ bornil.gg@gmail.com
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define ll(a) ll a; cin>>a;
#define string(a) string a; cin>>a;
#define pb(a) emplace_back(a)
#define vll  vector<ll>
#define pq priority_queue
#define mpp make_pair
#define ff first
#define ss second
#define check(ans) (ans) ? cout<<"Yes"<<'\n' : cout<<"No"<<'\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define sz(x) (ll)((x).size())
#define bb begin()
#define ee end()
#define all(x) (x).begin(), (x).end()
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
//#define test() ull t;cin>>t;while(t--)

void solve(ll tc)
{
    ull a;
    cin>>a;
    ll ten=0,two=0;
    //ull flag=0;
        while(a%10==0 && a>0)
        {
            a=a/10;
            ten++;
            //cout<<a<<v;
        }
        
        while(a%2==0 && a>0)
        {
            a=a/2;
            two++;
           // cout<<a<<v;
        }
    //cout<<a<<v;
    check(a==1 && two<=ten);
}

int main()
{
    fastio();
    ll(t); ll tc=0;
    while(t--)
    {
        tc++;
        solve(tc);
    }
    return 0;
}