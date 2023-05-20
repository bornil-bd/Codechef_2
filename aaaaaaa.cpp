#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define v '\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
#define FOR3(a,b,c) for(int(a)=(b); (a)>(c); (a)--)
#define FOR4(a,b,c) for(int(a)=(b); (a)>=(c); (a)--)
int main()
{
    long long int t;
    cin >> t;
    long long int j=1;
    while(t--)
    {
        long long int a, b,c,d,e,aba,abb,abc;
        cin >> a >> b >> c >> d;
        if((a+b+c)%3==0)
        {
            e=(a+b+c)/3;
            aba=abs(e-a);
            abb=abs(e-b);
            abc=abs(e-c);
            
            if(aba%d==0 && abb%d==0 && abc%d==0)
            {
                cout <<"Case "<<j<<": Peaceful"<<v;
            }
            else cout <<"Case "<<j<<": Fight"<<v;
        }
        else cout <<"Case "<<j<<": Fight"<<v;
        j++;

    }
    return 0;
}