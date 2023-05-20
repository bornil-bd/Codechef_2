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
        int a,b,x,y;
        cin >> a >> b;
        x=max(a,b);
        y=min(a,b);
        int flag=0;
        while(y<=x)
        {
            if(x==y)
            {
                flag=1;
                break;
            }
            y*=2;
        }
        if(flag==1) cout << "YES" << v;
        else cout << "NO" << v;
    }
    return 0;
}