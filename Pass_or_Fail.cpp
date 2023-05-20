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
        cin >> a >> b >>c;
        d=(b*3)-(a-b);
        if(d<c) cout << "FAIL" << '\n';
        else cout << "PASS" << '\n';
    }
    return 0;
}