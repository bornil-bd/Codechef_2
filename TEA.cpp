#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,y,z,b;
    double a;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> z;
        if(y>=x)
        {
            cout << z <<'\n';
        }
        else
        {
            a=ceil(x*1.0/y);
            n=(int)a;
            cout << n*z <<'\n';
        }
    }
    return 0;
}