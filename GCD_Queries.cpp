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
void custom(vector<ll>&vv, ll n)
{
    vv.erase(vv.begin()+n);
    sort(vv.begin(),vv.end());
}
int main()
{
    fastio();
    test()
    {
        ll a,x;
        cin>>a;
        vector<ll>vc;
        loop(i,0,a)
        {
            cin>>x;
            vc.pb(x);
        }
        sort(vc.begin(),vc.end());
        ll b;
        cin>>b;
        loop(i,0,b)
        {
            ll c,m=INT_MAX,pos,xp=0;
            cin>>c;
            loop(i,0,vc.size())
            {

                if(__gcd(c,vc[i])<m && __gcd(c,vc[i])>1)
                {
                    
                    xp=1;
                    m=__gcd(c,vc[i]);
                    pos=i;
                    break;
                  // ll g=__gcd(c,vc[pos]);
                    //cout<<g<<v;
                }
            }
            if(xp==0) pos=0;
            cout<<vc[pos]<<" ";
            custom(vc,pos);

        }
        cout<<v;
    }
    return 0;
}