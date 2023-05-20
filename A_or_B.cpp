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
        cin >> a >> b;
        c=a+b;
        d=(a*2)+(c*4);
        e=(b*4)+(c*2);
        if(d>=e) cout << 1500-e << '\n';
        else cout << 1500-d << '\n';
    }
    return 0;
}