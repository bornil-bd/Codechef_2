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
        int n;
        cin >> n;
        if(n%2==1) cout << "NO" << v;
        else 
        {
            int a[n],b[101],flag;
            FOR(i,0,100)
            {
                b[i]=0;
            }

            FOR(i,0,n)
            {
                cin >> a[i];
                b[a[i]]++;
            }
            FOR(i,0,100)
            {
                if(b[i]%2==0) flag=1;
                else{
                    flag=0;
                    break;
                }
            }
            if(flag==0) cout << "NO" << v;
            else cout << "YES" << v;
        }
    }
    return 0;
}