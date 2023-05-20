#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
//#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
//#define FOR3(a,b,c) for(int(a)=(b); (a)>(c); (a)--)
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a=0,b=0;
        cin >> n;
        string s;
        FOR(i,0,n)
        {
            cin >> s;
            if(s=="START38") a++;
            else if(s=="LTIME108") b++;
        }
        cout << a << " " << b << '\n';
    }
    return 0;
}