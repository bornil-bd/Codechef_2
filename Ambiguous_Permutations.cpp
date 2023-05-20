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
    while(1)
    {
        int n,count=0;
        cin >> n;
        if(n==0) break;
        int a[n];
        FOR2(i,1,n)
        {
            cin >> a[i];
        }
        FOR2(i,1,n)
        {
            if(a[a[i]]!=i) count++;
        }
        if(count==0) cout << "ambiguous" << v;
        else cout << "not ambiguous" << v;
    }
    return 0;
}
