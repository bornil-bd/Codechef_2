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
        ll a,x;
        cin>>a;
        if(a<3) cout<<"0"<<v;
        else 
        {
            if(a%2==0)
            {
                x=((a-2)/2)*3;
            }
            else{
                x=((a-3)/2)*3+2;
            }
             cout<<x<<v;

        }
    }
    return 0;
}