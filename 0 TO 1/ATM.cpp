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
    ll a;
    double b;
    cin>>a>>b;
    double c=(double)a+0.5;
    if(a%5==0 && c<=b)
    {
        cout<<fixed<<setprecision(2)<<b-c<<v;
    }
    else cout<<fixed<<setprecision(2)<<b<<v;
    return 0;
}