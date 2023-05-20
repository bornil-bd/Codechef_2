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
        int a,b,c,d,e,f,g;
        cin >>a >> b >> c >> d;
        e=b*7;
        f=(c*a)+((7-a)*d);
        if(e>f) cout << e <<v;
        else cout << f << v;
    }
    return 0;
}