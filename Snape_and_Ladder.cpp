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
        int a,b,c,d;
        double e,f;
        cin >> a >> b;
        c=a*a;
        d=b*b;
        e=sqrt(d-c);
        f=sqrt(d+c);
        cout << fixed << setprecision(5) << e << " " << f << v;
    }
    return 0;
}