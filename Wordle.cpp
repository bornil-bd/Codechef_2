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
        string a,b,c;
        cin >> a;
        cin >> b;
        FOR(i,0,a.length())
        {
            if(a[i]==b[i]) c=c+"G";
            if(a[i]!=b[i]) c=c+"B";
        }
        cout << c << v;
    }
    return 0;
}