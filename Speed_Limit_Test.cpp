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
        double x,y;
        cin >> a >> b >> c >> d;
        x=(double)a/(double)b;
        y=(double)c/(double)d;
        if(x>y) cout << "Alice" << '\n';
        else if(x<y) cout << "Bob" << '\n';
        else cout << "Equal" << '\n';

    }
    return 0;
}