#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,e;
        cin >> a >> b >> c;
        e=b*c;
        //cout << e << '\n';
        double d;
        d=(double)a/(double)e;
        //cout << d << '\n';
        cout << ceil(d) << '\n';
    }
    return 0;
}