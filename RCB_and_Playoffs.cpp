#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z,a,b,c;
        cin >> x >> y >> z;
        if(x>=y) cout << "YES" << '\n';
        else{
        a=y-x;
        b=2*z;
        if(b>=a) cout << "YES" << '\n';
        else cout << "NO" << '\n';
        }
    }
    return 0;
}