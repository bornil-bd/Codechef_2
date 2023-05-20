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
        int x,y,z;
        cin >> x >> y;
        z=y-x;
        if(z%2==0)
        {
            cout << x+(z/2) << '\n';
        }
        else
        {
            cout << "-1" << '\n';
        }
    }
    return 0;
}