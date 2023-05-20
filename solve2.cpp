#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)
int main()
{
    fastio();
    ll a,max=0,tot=0,rem;
    cin >> a;
    ll b[a];
    //cin >> a;
    loop(i,0,a)
    {
        cin>>b[i];
        if(b[i]>max) max=b[i];
    }
    ll c[max];
    loop(i,0,max)
    {
        c[i]=0;
    }
    loop(i,0,a)
    {
        c[b[i]]++;
    }
    vector<ll> vec;
    loop(i,0,max)
    {
        if(c[i]>1) 
        {
            tot+=c[i];
            vec.emplace_back(c[i]);
        }
    }
    rem=a-tot;
    //cout<<rem<<v;
    sort(vec.begin(),vec.end());
    for(ll i=1; i<vec.size(); i++)
    {
        vec[i]=vec[i]-(vec[i-1]-1);
    }
    //cout<<vec.size()-1<<v;
    //cout<<vec[vec.size()-1]<<v;
    cout<<rem+(vec.size()-1)+vec[vec.size()-1]-2*(vec[vec.size()-1]-1)<<v;

    return 0;
}