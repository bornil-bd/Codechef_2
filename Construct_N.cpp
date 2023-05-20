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
        ll a;
        cin >>a ;
        ll b=a%7;
        if(b==0 || b%2==0) cout << "YES" << v;
        else cout << "NO" << v;
    }
    return 0;
}