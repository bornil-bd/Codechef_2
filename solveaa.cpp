#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define cc cout<<
#define v '\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
#define FOR3(a,b,c) for(int(a)=(b); (a)>(c); (a)--)
#define FOR4(a,b,c) for(int(a)=(b); (a)>=(c); (a)--)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    long long int m=1;
    while(t--)
    {
        long long int count=0;
        ll a;
        cin >> a;
        char b[3][a];
        FOR(i,0,3)
        {
            FOR(j,0,a)
            {
            cin>> b[i][j];
            }
        }
    
        FOR(j,0,a-1)
        {
            if(b[0][j]=='O' && b[0][j+1]=='O' && b[1][j]=='O' && b[1][j+1]=='O')
            {
                count++;
                j=j+1;
                if(b[0][j+2]=='O' && b[1][j+2]=='O')
                {
                    j=j+1;
                }
            }
            else if(b[1][j]=='O' && b[1][j+1]=='O' && b[2][j]=='O' && b[2][j+1]=='O')
            {
                count++;
                j=j+1;
                if(b[1][j+2]=='O' && b[2][j+2]=='O')
                {
                    j=j+1;
                }
            }
            else continue;
        }
        if(count%2==1)
        {
            cout <<"Case "<<m<<": Jhinuk"<<v;
        }
          else cout <<"Case "<<m<<": Grandma"<<v;
        m++;
    }
    return 0;
}