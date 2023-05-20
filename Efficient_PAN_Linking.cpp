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
        
        ll x=0;
        string s;
        char c='7';
        cin>>s;
        if(s.size()==1)
        {
            x=(int)s[0]-48;
        }
        else 
        {
            loop(i,s.size()-2,s.size())
            {
                x=(x*10)+(int)s[i]-48;
            }
        }
        cout<<x%20<<v;
    }
    return 0;
}