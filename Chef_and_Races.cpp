#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,d,x;
    cin >> t;
    while(t--)
    {
        x=2;
        cin >> a >> b >> c >> d;
       if(a==c || b==c)
       {
        x=x-1;
       }
       if(a==d || b==d)
       {
        x=x-1;
       }
       cout << x << '\n';
    }
    return 0;
}