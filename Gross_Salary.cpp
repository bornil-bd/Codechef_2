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
        int a;
        double c,d;
        cin >> a;
        if(a<1500) 
        {
            c=(double)a*10.0/100.0;
            d=(double)a*90.0/100.0;
           // cout << d << v;
            //cout << c << v;
            cout << a+c+d << v;
        }
        else{
            c=(double)a*98.0/100.0;
            cout << fixed << setprecision(2) << a+500+c << v;
        }
    }
    return 0;
}