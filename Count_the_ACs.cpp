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
        int a,b,c;
        cin >> a;
        b=a/100;
        c=a%100;
        if((b+c)>10) cout << "-1" << '\n';
        else cout << b+c << '\n';
    }
    return 0;
}