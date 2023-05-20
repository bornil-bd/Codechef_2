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
        int a,b;
        cin >> a >> b;
        double c;
        c=(double)a/(double)(b*b*1.0);
        if(c>=30) cout << "4" << v;
        else if(c>24) cout << "3" << v;
        else if (c>18) cout << "2" << v;
        else cout << "1" << v;
    }
    return 0;
}