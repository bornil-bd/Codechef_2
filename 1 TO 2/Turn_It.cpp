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
    test()
    {
        ll a,b,c,d;
        double e;
        cin>>a>>b>>c>>d;
        if((a*a*1.00)>=(2*c*1.00)*d*1.00)
        {
        e=sqrt((a*a*1.00)-(2*c*1.00)*d*1.00);
        double f=(double)b;
        //cout<<e<<" "<<f<<v;
        check(e<=f);
        }
        else yes;
        
    }
    return 0;
}