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
        int a,b;
        double c;
        cin >> a >> b;
        if(a>b)
        {
            c=(double)a/(double)b;
            if(c>10) cout << "YES" << v;
            else cout << "NO" << v;
        }
        else cout << "NO" << v;
    }
    return 0;
}