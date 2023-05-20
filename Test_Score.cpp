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
        if(c>=b || c==0)
        {
            if(c%b==0)
            {
                d=c/b;
                if(d<=a) cout << "YES" << '\n';
            }
            else cout << "NO" << '\n';
        }
        else cout << "NO" << "\n";
    }
    return 0;
}