#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    for(int i=7; i<s.size()-2; i++)
    {
        cout<<s[i];
    }
    cout<<'\n';
    return 0;
}