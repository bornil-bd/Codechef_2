#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define v '\n'
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
        int a,c;
        double b;
        cin >> a >> b >> c;
        if(a>50)
        {
            if(b<0.7 && c>5600) cout << "10" <<v;
            else if(b<0.7) cout << "9" << v;
            else if(c>5600) cout << "7" << v;
            else cout << "6" << v;
        }
        else if(b<0.7 && c>5600) cout << "8" << v;
        else if(b<0.7 || c>5600) cout << "6" << v;
        else cout << "5" << v;
    }
    return 0;
}