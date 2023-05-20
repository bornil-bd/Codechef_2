/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define v '\n'
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
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
        vector<int> vc;
        int a,b,c;
        cin >> a >> b >> c;
        int m=min({a,b,c});
        if(m==a) cout << "ALICE" << v;
        else if(m==b) cout << "BOB" << v;
        else cout << "CHARLIE" << v;

    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define v '\n'
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
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
        map<int,string> mp;
        int a,b,c;
        cin >> a >> b >> c;
        mp.insert({a,"ALICE"});
        mp.insert({b,"BOB"});
        mp.insert({c,"CHARLIE"});
        for(auto itr=mp.begin(); itr!=mp.end(); itr++)
        {
            cout<< itr->second << v;
            break;
        }

    }
    return 0;
}