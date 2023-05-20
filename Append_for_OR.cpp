#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define v '\n'
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
        ll a,b,orr=0,x,y;
        cin >> a >> b;
        ll n[a];
        FOR(i,0,a)
        {
            cin >> n[i];
            orr = orr | n[i];
        }
        x=b-orr;
        //cout << x << v;
        if(x>1 && x!=1)
        {
            y=x%2;
            //cout << y << v;
            if(y==1) cout << "-1" <<v;
            else cout << b-orr << v;
        }
        else cout << b-orr << v;
    }
    return 0;
}