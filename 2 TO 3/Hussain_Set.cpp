//  b0rnil
//  feel free to ask any doubt @ bornil.gg@gmail.com
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define ii(a) ll a; cin>>a;
#define string(a) string a; cin>>a;
#define pb(a) emplace_back(a)
#define vll  vector<ll>
#define pq priority_queue
#define mpp make_pair
#define ff first
#define ss second
#define check(ans) (ans) ? cout<<"YES"<<'\n' : cout<<"NO"<<'\n'
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
    ii(aa) ii(b)
    queue<ll>a;
    vector<ll>vc;
    loop(i,0,aa)
    {
        ii(x)
        vc.pb(x);
    }
    sort(all(vc));
    ll cnt=0,ind=aa-1;
    while(b--)
    {
        ii(w)
        ll mx=0;
        while(cnt<w)
        {
            if(ind>=0 &&(a.empty() || a.front()<=vc[ind]))
            {
                mx=vc[ind];
                ind--;
            }
            else
            {
                mx=a.front();
                a.pop();
            }
            a.push(mx/2);
            cnt++;  
        }
        cout<<mx<<v;
    }

    
}

int main()
{
    fastio();
    ll t=1; ll tc=0;
    while(t--)
    {
        tc++;
        solve(tc);
    }
    return 0;
}