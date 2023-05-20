#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin >> t;
    while(t--)
    {
        cin >> x;
        y=x/5;
        cout << x-y << '\n';
    }
    return 0;
}