#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a1=0,b1=0;
    int a,b,max=0,dif,flag;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        a1=a1+a;
        b1=b1+b;
        dif=abs(a1-b1);
        if(max<dif) 
        {
            if(a1>b1) flag=1;
            else flag=2; 
            max=dif;
        }
    }
    cout << flag << " " << max << '\n';
    return 0;
}