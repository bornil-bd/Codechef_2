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
        int a,b,c,d;
        double x;
        cin >> a >> b >> c;
        x=(double)b/(double)c;
        d=ceil(x);
        cout << a*d << '\n';
     }
    return 0;
}