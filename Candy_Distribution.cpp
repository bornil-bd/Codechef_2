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
        int a,b;
        cin >> a >> b;
        if(a%b==0)
        {
            if((a/b)%2==0) cout << "Yes" << '\n';
            else cout << "No" << '\n';
        }
        else cout << "No" << '\n';
    }
    return 0;
}