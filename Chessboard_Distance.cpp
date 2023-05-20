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
        int a,b,c,d,e,f,g;
        cin >> a >> b >> c >> d;
        e=abs(a-c);
        f=abs(b-d);
        g=max(e,f);
        cout << g << '\n';
    }
    return 0;
}