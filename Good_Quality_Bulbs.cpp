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
        int a,b,c,sum=0;
        cin >> a >> b;
        c=a*b;
        int x[a];
        FOR(i,0,a-1)
        {
            cin >> x[i];
            sum+=x[i];
        }
        if(sum>c) cout << "0" << v;
        else cout << c-sum << v;
    }
    return 0;
}