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
        int a, b ,c;
        cin >>a >> b >> c;
        int d[a];
        int max=0;
        int count=0,total=0;
        FOR(i,0,a)
        {
            cin >> d[i];
            if(d[i]>max) max=d[i];
        }
        FOR(i,0,a)
        {
            if((d[i]+c)<max)
            {
                count++;
                d[i]=max;
            }
        }
        FOR(i,0,a)
        {
            total=total+d[i];
        }
        cout << total-(count*c) << '\n';
    }
    return 0;
}