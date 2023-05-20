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
        int a,b;
        cin >> a >> b;
        if(b==a || b==0) cout << "0" << '\n';
        else
        {
            if(b<=(a/2))
            {
                cout << b << '\n';
            }
            else{
                cout << a-b << '\n';
            }
        }
    }
    return 0;
}