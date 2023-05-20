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
        int n;
        cin >> n;
        char ar[n];
        FOR(i,0,n)
        {
            cin>>ar[i];
            if(ar[i]=='A') ar[i]='T';
            else if(ar[i]=='T') ar[i]='A';
            else if(ar[i]=='G') ar[i]='C';
            else if(ar[i]=='C') ar[i]='G';
        }
        FOR(i,0,n)
        {
            cout << ar[i];
        }
        cout << '\n';
    }
    return 0;
}