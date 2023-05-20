#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a,b,c,d,e,f;
        cin >> a >> b >> c >> d;
        e=pow(a,b);
        f=pow(c,d);
        if(e>f) cout << "HaHa" << '\n';
        else if(e<f) cout << "Congrats" <<'\n';
        else cout << "Lazy" << '\n';
    }
    return 0;
}