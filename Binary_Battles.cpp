#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
#define FOR3(a,b,c) for(int(a)=(b); (a)>(c); (a)--)
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d=0;
        cin >>a >> b >> c;
        for(int i=a; i>0; i=i/2)
        {
            d++;
        }
        //cout <<d-1 << " " << c << '\n';
        cout << ((d-1)*b)+((d-2)*c) << '\n';
    }
    return 0;
}