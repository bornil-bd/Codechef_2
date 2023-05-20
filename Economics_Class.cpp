#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,i,x=0;
        cin >> a;
        int b[a],c[a];
        for(i=0; i<a; i++)
        {
            cin >> b[i];
        }
        for(i=0; i<a; i++)
        {
            cin >> c[i];
        }
        for(i=0; i<a; i++)
        {
            if(b[i]==c[i])
            {
                x++;
            }
        }
        cout << x <<'\n';
    }
    return 0;
}