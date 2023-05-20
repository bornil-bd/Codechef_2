#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define v '\n'
#define FOR(a,b,c) for(int(a)=(b); (a)<(c); (a)++)
#define FOR2(a,b,c) for(int(a)=(b); (a)<=(c); (a)++)
#define FOR3(a,b,c) for(int(a)=(b); (a)>(c); (a)--)
#define FOR4(a,b,c) for(int(a)=(b); (a)>=(c); (a)--)
int main()
{
    char a,b;
    cin >> a >> b;
    if(a=='R' || b=='R') cout << "R" << v;
    else if(a=='B' || b=='B') cout << "B" <<v;
    else cout << "G" <<v;
    return 0;
}