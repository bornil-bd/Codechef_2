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
        int n;
        cin >> n;
        int a[n];
        int max=0;
        FOR(i,0,n)
        {
            cin >> a[i];
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        cout << max << '\n';
    }
    return 0;
}