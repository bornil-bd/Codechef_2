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
        ll n,b,flag=0;
        cin >> n;
        while(n>0)
        {
            b=n%10;
            if(b==7)
            {
                flag=1;
                break;
            }
            n=n/10;
        }
        if(flag==1) cout << "YES" << v;
        else cout << "NO" << v;
    }
    return 0;
}