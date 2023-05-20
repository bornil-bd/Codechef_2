#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define v '\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
#define FOR3(a,b,c) for(int(a)=(b); (a)>(c); (a)--)
#define FOR4(a,b,c) for(int(a)=(b); (a)>=(c); (a)--)
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> vec(n+1);
        vector<ll> pen(n+1);
        vector<ll> ind(n+1);
        FOR2(i,1,n)
        {
            cin >> vec[i];
            pen[i]=1;
            ind[i]=i;
        }
        ll q;
        cin >> q;
        while(q--)
        {
            ll f,s,t,d;
            cin >> f;
            if(f==1)
            {
                cin >> s >> t;
                if(vec[s]>vec[t])
                {
                    vec[s]=vec[s]+vec[t];
                    vec[t]=0;
                    pen[s]=pen[s]+pen[t];
                    pen[t]=0;
                    ind[t]=ind[s];
                }
                else if(vec[s]<vec[t])
                {
                    vec[t]=vec[s]+vec[t];
                    vec[s]=0;
                    pen[t]=pen[t]+pen[s];
                    pen[s]=0;
                    ind[s]=ind[t];
                }
            }
            else
            {
                cin >> d;
            }
            if(f==2)
            {
                cout << pen[d] << v;
            }
            else if(f==3)
            {
                cout << ind[d] << v;
            }
        }
    }
    return 0;
}