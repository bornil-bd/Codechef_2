#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
int main()
{
    int t,x,y;
    cin >> t;
    while(t--)
    {
         cin >> x >> y;
	    if(x>=y) {
	        cout << (x-y) << '\n';
	    }
	    else {
	        cout << (y-x) << '\n';
	    }
    }
    return 0;
}