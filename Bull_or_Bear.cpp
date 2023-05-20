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
        int x,y;
        cin>> x >> y;
        if(x>y) cout << "LOSS" <<'\n';
        else if(x<y) cout << "PROFIT" << '\n';
        else cout << "NEUTRAL" << '\n';
    }
    return 0;
}