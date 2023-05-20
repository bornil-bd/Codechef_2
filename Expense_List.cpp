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
        int x,y,z,a,b,c,j;
        cin >> x >> y;
        z=pow(2,y);
        for(j=1;j<=x;j++)
        {
            z=z/2;
        }
        cout << z << '\n';
    }
    return 0;
}