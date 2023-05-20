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
        int n,one=0,zero=0;
        cin >> n;
        vector<char> a;
        FOR(i,0,n)
        {
            cin>>a[i];
            if(a[i]=='1') one++;
            else zero++;
        }
        if(one<=(n/2)) cout<<one<< v;
        else cout << zero+1 << v;
    }
    return 0;
}