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
        int a,b,c,d,e;
        double x;
        cin >> a >> b >> c;
        d=abs(a-b);
        x=(double)d/(double)c;
        cout << ceil(x) << '\n';
    }
    return 0;
}