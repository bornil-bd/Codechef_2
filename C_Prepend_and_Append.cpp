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
        int n,j,k;
        cin >> n;
        int x=n;
        vector<char> vc(n);
        FOR(i,0,n)
        {
            cin >> vc[i];
        }
        for(j=0,k=n-1; j<=(n/2)-1; j++,k--)
        {
            if((vc[j]=='1' && vc[k]=='0') || (vc[j]=='0' && vc[k]=='1')) 
            {
                x=x-2;
            }
            else break;

        }
        cout << x << v;
    }
    return 0;
}