#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z=0;
        cin >> x;
        while(x>0)
        {
            y=x%10;
            if(y==4) z++;
            x=x/10;
        }
        cout << z << '\n';
        
    }
    return 0;
}