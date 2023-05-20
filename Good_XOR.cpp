#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)
int main()
{
    fastio();
    test()
    {
        ll a,one=0,zero=0;
        cin >> a;
        ll b[a];
        loop(i,0,a)
        {
            cin>> b[i];
            (b[i]==1) ? one++ : zero++;
        }
        cout<<one<< " "<<zero<<v;
        if(zero>=one)
        {
            ll d=zero-one;
            (d%2==0) ? cout<<d/2<<v : cout<<"-1"<<v;
        }
        else cout<<"-1"<<v;
        
    }
    return 0;
}