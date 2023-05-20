#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        int x,n,flag=0;;
        cin >>x;
        n=x/2;
        if(x==1) cout << "no" << '\n';
        else if(x==2) cout << "yes" << '\n';
        else{
            FOR(i,2,n)
            {
                if(x%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) cout << "yes" << '\n';
            else cout << "no" << '\n';
        }
    }
    return 0;
}