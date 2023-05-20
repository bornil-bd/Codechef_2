#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,y,rem,gcd,lcm;
    cin>>t;
    while(t--)
    {
       cin>>x>>y;
       long long num1=x;
       long long num2=y;
       while(y!=0)
       {
          rem = x%y;
          x = y;
          y = rem;
       }
       gcd = x;
       lcm = num1*num2/gcd;
       cout<<gcd<<" "<<lcm<<'\n';
    }
    return 0;
}