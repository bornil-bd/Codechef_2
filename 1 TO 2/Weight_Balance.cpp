//b0rnil
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define pb(a) push_back(a);
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)
int main()
{
    fastio();
    test()
    {
        ll a,b,c,d,e,f,g,h;
        cin>>a>>b>>c>>d>>e;
        f=b-a;
        g=c*e;
        h=d*e;
        (f>=g && f<=h) ? cout<<"1"<<v : cout<<"0"<<v;
    }
    return 0;
}