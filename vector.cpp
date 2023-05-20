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
    vector<int> vec;
    vector<int>::iterator ptr;
    FOR(i,0,5)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for(ptr=vec.begin();ptr!=vec.end(); ptr++)
    {
        cout << *ptr << " ";
    }

    return 0;
}