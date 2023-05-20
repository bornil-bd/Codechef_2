#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a;
        cin >> a;
        ll n[a];
        FOR(i,0,a)
        {
            cin >> n[i];
        }
        ll sum,max=0;
        FOR(i,0,a)
        {
            sum=1;
            FOR2(j,2,n[i])
            {
                sum=sum*j;
            }
            max=max+sum;
        }
        cout << max << '\n';
    }
    return 0;
}