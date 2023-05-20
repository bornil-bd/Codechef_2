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
        int n;
        int a,b,c,d,e;
        cin >> n;
        cin >> a >> b >> c >> d;
        e=max({a,b,c,d});
        cout << e << '\n';
    }
    return 0;
}