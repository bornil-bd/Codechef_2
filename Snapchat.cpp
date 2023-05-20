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
        int n;
        cin >> n;
        int a[n],b[n],count=0,max=0;
        FOR(i,0,n)
        {
            cin >> a[i];
        }
        FOR(i,0,n)
        {
            cin >> b[i];
        }
        FOR(i,0,n)
        {
            if(a[i]==0 || b[i]==0) count=0;
            else count++;
            if(count>max) max=count;
        }
        cout << max << v;
    }
    return 0;
}