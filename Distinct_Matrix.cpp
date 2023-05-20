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
        ll a,c;
        string b="";
        cin >> a;
        if(a>2)
        {
            loop(i,0,a-1)
            {
                cout<<"0";
                b+='0';
                
            }
            cout<<"1"<<v;
            b[0]='1';
            b+='0';
            //cout<<b<<v;
            c=a-1;
            loop(i,0,a-2)
            {
                b[c]='1';
                cout<<b<<v;
                c--;
            }
            loop(i,1,a)
            {
                b[i]='0';
            }
            cout<<b<<v;


        }
        else cout<<"-1"<<v;
    }
    return 0;
}