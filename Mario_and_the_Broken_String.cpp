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
        int n,j;
        cin >>n;
        string a;
        char b[n],c[n];
        cin >> a;
        FOR(i,0,n/2)
        {
            j=0;
            b[j]=a[i];
            j++;
        }
        FOR(i,n/2,n)
        {
            j=0;
            c[j]=a[i];
            j++;
        }
        
        if (strcmp(b,c) == 0) cout << "YES" << v;
        //if(b==c) cout << "YES" << v;
        else cout << "NO" << v;
    }
    return 0;
}