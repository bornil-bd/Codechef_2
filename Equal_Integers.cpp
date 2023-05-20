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
        int a,b,c;
        cin >> a >> b;
        if(a<=b) cout << b-a << v;
        else 
        {
            if((a-b)%2==0) cout << ((a-b)/2) << v;
            else cout << ((a-b)/2)+2 << v;
        }
    }
    return 0;
}