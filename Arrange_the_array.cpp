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
        cin >> a;
        ll b[a];
        set<ll> st;
        loop(i,0,a)
        {
            cin>>b[i];
            st.insert(b[i]);
        }
        sort(b,b+a);
        if(b[0]==b[1])
        {
            if(a==3) swap(b[1],b[2]);
            else{
            loop(i,2,a)
            {
                if(b[i]!=b[0])
                {
                    swap(b[2],b[i]);
                    break;
                }
            }
            }
        }
        else if(b[1]==b[2])
        {
            if(a==3) swap(b[0],b[1]);
            else swap(b[0],b[2]);
        }
        else swap(b[0],b[1]);
        if(st.size()>=2 && a>=3)
        {
            loop(i,0,a-1)
        {
            cout<<b[i]<<" ";
        }
        cout<<b[a-1]<<v;
        }
        else cout<<"-1"<<v;
        
    }
    return 0;
}