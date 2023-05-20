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
        int a,b,c;
        cin >> a >> b;
        c=a+b;
        if(c==2 || c ==3 || c==5 || c==7 || c==11)
        {
            cout << "Alice" << '\n';
        }
        else cout << "Bob" << '\n';
    }
    return 0;
}