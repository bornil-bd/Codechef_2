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
        string s, a;
        cin >> s;
        for(int i=0; i<n; i=i+2)
        {
            if(s[i]=='0' && s[i+1]=='0') 
            {
                a=a+"A";
            }
            if(s[i]=='0' && s[i+1]=='1') 
            {
                a=a+"T";
            }
            if(s[i]=='1' && s[i+1]=='0') 
            {
                a=a+"C";
            }
            if(s[i]=='1' && s[i+1]=='1') 
            {
                a=a+"G";
            }
        }
        cout << a << v;
    }
    //return 0;
}
