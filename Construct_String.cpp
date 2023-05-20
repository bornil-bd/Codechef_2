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
        ll a;
        cin>>a;
        string s;
        cin>>s;
        string b;
        loop(i,0,a)
        {
            b+=s[i];
            ll d=b.size();
            if(d>2 && b[d-1]==b[d-2] && b[d-2]==b[d-3])
            {
                 b.pop_back();
            b.pop_back();
            }
           
        }
        cout<<b<<v;
    }
    return 0;
}