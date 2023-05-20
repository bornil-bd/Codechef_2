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
        ll a,b;
        cin>>a>>b;
        string c;
        cin>>c;
        if(c[0]=='0')
        {
            c[0]='1';
            b=b-1;
        }
        loop(i,0,b)
        {
            c+='0';
        }
        cout<<c<<v;
    }
    return 0;
}