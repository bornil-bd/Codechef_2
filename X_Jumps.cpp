#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,e;
        cin >> a >> b;
        c=a/b;
        d=c*b;
        e=a-d;
        cout << c+e << '\n';
    }
    return 0;
}