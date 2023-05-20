#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        int n,x=0;
        cin >> n;
        int a[n];
        FOR(i,0,n)
        {
            cin >> a[i];
        }
        FOR4(i,n-1,0)
        {
            if(a[i]==0)
            {
                x++;
                continue;
            }
            if(a[i]!=0)
            {
                break;
            }
        }
        cout << n-1-x << '\n';
    }
    return 0;
}