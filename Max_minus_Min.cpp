#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,e;
        cin >> a >> b >> c;
        d=max({a,b,c});
        e=min({a,b,c});
        cout << d-e << '\n';
    }
    return 0;
}