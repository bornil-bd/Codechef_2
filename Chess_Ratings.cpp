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
        int x,y,a;
        double b;
        cin>> x >> y;
        a=y-x;
        b=(double)a/8.0;
        cout << ceil(b) << '\n';
    }
    return 0;
}