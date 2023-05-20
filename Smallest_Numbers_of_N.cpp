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
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
    cin>>n;
    ll a=0;
    a+=n/100;
    n=n%100;
    a+=n/50;
    n=n%50;
    a+=n/10;
    n=n%10;
    a+=n/5;
    n=n%5;
    a+=n/2;
    n=n%2;
    a+=n/1;
    cout<<a<<v;
    }
    return 0;
}