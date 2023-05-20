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
        int a, b, c ,d;
        cin >> a >> b >> c >> d;
        if(b>a)
        {
            if((b-a)<=c) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
        else
        {
            if((a-b)<=d) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
    return 0;
}