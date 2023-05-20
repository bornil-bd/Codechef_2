#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d=0;
        cin >> a >> b;
        while(a--)
        {
            cin >> c;
            c=c+b;
            if(c%7==0) d++;
        }
        cout << d << '\n';
    }
    return 0;
}