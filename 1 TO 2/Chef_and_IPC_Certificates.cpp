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
int main()
{
    fastio();
    ll a,b,c,x,sum=0,count=0;
    cin>>a>>b>>c;
    loop(i,0,a)
    {
        loop(j,0,c+1)
        {
            cin>>x;
            sum+=x;
        }
        sum=sum-x;
        if(sum>=b && x<=10) count++;
        sum=0;
    }
    cout<<count<<v;
    return 0;
}