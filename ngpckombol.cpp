#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while(t--)
    {
        long long a,b,c,d,e,f,count=0;
        cin >> a >> b >> c >> d >> e >> f;
        while(d>a)
        {
            count++;
            d=d/2;
        }
        while(e>b)
        {
            count++;
            e=e/2;
        }
        f=f*pow(2,count);
        cout << count << '\n';

        cout << f << '\n';
        if(f<=d) cout << count << '\n';
        else cout << "-1" << '\n';
    }
    return 0;
}