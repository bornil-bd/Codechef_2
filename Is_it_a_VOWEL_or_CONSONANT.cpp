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
        char a;
        cin >> a;
        if(a>='A' && a<='Z')
        {
            if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U') cout << "Vowel" << v;
            else cout << "Consonant" << v;
        }
    return 0;
}