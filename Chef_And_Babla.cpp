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
        ll n;
        cin >> n;
        ll a[n],x,flag,num;
        FOR(i,0,n)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        x=a[n-1];
        FOR4(i,x,0)
        {
            flag=0;
            FOR(j,0,n)
            {
                if(a[j]>=0)
                {
                    if(a[j]>i) flag=1;
                    else 
                    {
                        flag=0;
                        break;
                    }
                }
                else
                {
                    if(a[j]<-i) flag=1;
                    else{
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                num=i;
                break;
            }
            else num=-1;
        }
        cout << num << v;
    }
    return 0;
}