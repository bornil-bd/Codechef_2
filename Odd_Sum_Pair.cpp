#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >>c;
        if(a%2==0)
        {
            if(b%2!=0 || c%2!=0)
            {
                cout << "YES" <<'\n';
            }
            else cout << "NO" <<'\n';
        }
        else
        {
            if(b%2==0 || c%2==0)
            {
                cout << "YES" <<'\n';
            }
            else cout << "NO" <<'\n';
        }
    }
    return 0;
}