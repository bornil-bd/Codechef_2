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
        int a,b,c,d,e;
        double x,y;
        cin >> a >> b >> c >> d >> e;
        x=((double)a/d*1.0)*b*1.0;
        y=((double)a/e*1.0)*c*1.0;
        if(x>y) cout << "DIESEL" << v;
        else if (x<y) cout << "PETROL" << v;
        else cout << "ANY" << v;
    }
    return 0;
}