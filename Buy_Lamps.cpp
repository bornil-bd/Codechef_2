#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,x,y;
        cin >> a >> b >> c >> d;
        if(c<=d) cout << c*a << '\n';
        else{
            x=c*b;
            y=(a-b)*d;
            cout << x+y << '\n';
        }
    }
    return 0;
}