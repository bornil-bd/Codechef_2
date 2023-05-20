#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    long long int x;
    cin >> a >> b >> c;
    d=20-b;
    e=d*6;
    f=e*6;
    x=c+f;
    if(x>a) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}