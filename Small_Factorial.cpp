#include<bits/stdc++.h>
using namespace std;

long long int fact(int n)
{
    if(n<=1)
    return 1;
    else
    return n*fact(n-1);
}

int main()
{
    int t,x;
    cin >> t;
    while(t--)
    {
        cin >> x;
        cout << fact(x) <<'\n';
    }
    return 0;
}