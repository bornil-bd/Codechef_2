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
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int x,y;
        x=min(a,c);
        y=max(b,d);
        if(a<=c)
        {
        if(c>b)
        {
            cout <<(b-a)+(d-c)+2 << v;
        }
        else cout << y-x+1 << v;
        }
        else if(a>c)
        {
            if(d<b)
            {
                cout <<b-c+1 << v;
            }
            else cout << d-c+1 << v;
        }
    }
    return 0;
}