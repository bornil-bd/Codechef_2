#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define v '\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
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
        int n,total,max=0;
        cin >> n;
        set<char> st;
        set<char> st2;
        vector<char> vc(n);
        FOR(i,0,n)
        {
            cin >> vc[i];
        }
        for(int j=0;j<n-1; j++)
        {
            st.insert(vc[j]);
            
            for(int k=j+1; k<n; k++)
            {
                
                st2.insert(vc[k]);
            }
            total=st.size()+st2.size();
            if(total>max)
            {
                max=total;
            }
        }
        cout << max << v;
    }
    return 0;
}