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
        int one=0,zero=0;
        int a[7];
        FOR(i,0,7)
        {
            cin >> a[i];
            if(a[i]==0) zero++;
            else one++;
        }
        if(one>zero) cout << "YES" << v;
        else cout << "NO" << v;
    }
    return 0;
}