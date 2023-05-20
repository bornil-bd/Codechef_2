#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,d;
    double x,y;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> d;
        x=(double)a/c*1.0;
        y=(double)b/d*1.0;
        if(x>y)
        {
            cout << "Chef" <<'\n';
        }
        else if(x<y)
        {
            cout << "Chefina" << '\n';
        }
        else{
            cout << "Both" << '\n';}
    }
    return 0;
}