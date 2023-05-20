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
    int t;
    cin >> t;
    while(t--)
    {
        int n,x=0,y=0,d=0;
        cin >> n;
        //string ch;
        //cin >> ch;
        vector<char> ch(n);
        FOR(i,0,n)
        {
            cin >> ch[i];
        }
        FOR(i,0,n)
        {
            if(ch[i]=='L') x=x-1;
            else if(ch[i]=='R') x=x+1;
            else if(ch[i]=='D') y=y-1;
            else y=y+1;

            if(x==1 && y==1)
            {
                d=1;
                yes;
                break;
            }
        }
        if(d==0)
        {
            no;
        }
    }
    return 0;
}