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
    map<int,string> mp;
    mp.insert({1,"Alice"});
    mp.insert({3,"Bob"});
    mp.insert({2,"Chef"});
    mp.insert({5,"Jhontu"});
    mp.insert({4,"Montu"});
    for(auto itr=mp.begin(); itr!=mp.end(); itr++)
    {
        cout << itr->first << " " << itr->second << v;
    }


    return 0;
}