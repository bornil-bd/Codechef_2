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
        int ar[n];
        FOR(i,0,n)
        {
            cin >> ar[i];
        }
        sort(ar,ar+n);
        int x,count=0;
        FOR(i,0,n)
        {
            if(ar[i]<=(i+1))
            {
                x=i+1-ar[i];
                count=count+x;
            }
            else
            {
                count=-1;
                break;
            }
        }
        if(count==-1) cout << "-1" << '\n';
        else cout << count << '\n';
    }
    return 0;
}