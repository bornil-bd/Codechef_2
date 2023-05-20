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
       ll a[n],b[n],max=0,max2=0,index;
       FOR(i,0,n)
       {
        cin >> a[i];
        if(a[i]>max)
        {
            max=a[i];
        }
       } 
       FOR(i,0,n)
       {
        cin >> b[i];
       }
       FOR(i,0,n)
       {
        if(a[i]==max)
        {
            if(b[i]>max2)
            {
                max2=b[i];
                index=i+1;
            }
        }
       }
       cout << index << v;
    }
    return 0;
}