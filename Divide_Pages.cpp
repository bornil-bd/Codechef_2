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
        ll a,sum=0;
        cin >> a;
        ll b[a];
        loop(i,0,a)
        {
            cin>>b[i];
            sum+=b[i];
        }
        if(a>=2 && sum%2==0) yes;
        else no;
        
    }
    return 0;
}