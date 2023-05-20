#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
int main()
{
    int t;
    cin >> t;
    int ar[t];
    FOR(i,0,t)
    {
        cin >> ar[i];
    }
    sort(ar,ar+t);
    FOR(i,0,t)
    {
        cout << ar[i] << '\n';
    }
    return 0;
}