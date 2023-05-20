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
        int a;
    cin >> a;
    if(a<3) cout << "LIGHT" << '\n';
    else if(a<7) cout << "MODERATE" << '\n';
    else cout << "HEAVY" << '\n';
    }
    return 0;
}