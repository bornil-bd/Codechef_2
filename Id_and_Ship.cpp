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
    int t;
    cin >> t;
    while(t--)
    {
        char a;
        cin >> a;
        if(a=='B' || a=='b') cout << "BattleShip" << v;
        else if(a=='C' || a=='c') cout << "Cruiser" << v;
        else if (a=='D' || a=='d') cout << "Destroyer" << v;
        else if(a=='F' || a=='f') cout << "Frigate" << v;
    }
    return 0;
}