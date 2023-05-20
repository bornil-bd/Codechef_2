#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b,c;
        cin >> a >> b;
        c=(a+b)%4;
        if(c==0 || c==1) 
        {
            cout << "Alice" << '\n';
        }
        else if(c==2 || c==3)
        {
             cout << "Bob" << '\n';
        }
    }
    return 0;
}