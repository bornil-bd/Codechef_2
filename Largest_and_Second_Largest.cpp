//  b0rnil
//  use my code freely :)

#include<bits/stdc++.h>
using namespace std;
typedef long long int   ll;
typedef unsigned long long int ull;
#define fastio()        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v               '\n'
#define ii(a)           ll a; cin>>a;
#define string(a)       string a; cin>>a;
#define pb(a)           emplace_back(a)
#define vll             vector<ll>
#define pq              priority_queue
#define mpp             make_pair
#define ff              first
#define ss              second
#define check(ans)      (ans) ? cout<<"YES"<<'\n' : cout<<"NO"<<'\n'
#define yes             cout<<"YES"<<'\n'
#define yess            cout<<"Yes"<<'\n'
#define no              cout<<"NO"<<'\n'
#define noo             cout<<"No"<<'\n'
#define sz(x)           (ll)((x).size())
#define bb              begin()
#define ee              end()
#define all(x)          (x).begin(), (x).end()
#define loop(a,b,c)     for(ull(a)=(b); (a)<(c); (a)++)
#define M               1000000007
#define maxall(a)       (*max_element(all(a)))
#define minall(a)       (*min_element(all(a)))
#define invec(a,n)      loop(i,0,n){ii(x) a.pb(x);}
#define inmap(mp,n)     loop(i,0,n){ii(x) mp[x]++}
//#define test()        ull t;cin>>t;while(t--)

// __builtin_popcount(x): This function is used to count the number of one’s(set bits) in an integer. for long long __builtin_popcountll(x)
// __builtin_parity(x): This function is used to check the parity of a number. This function returns true(1) if the number has odd parity else it returns false(0) for even parity. 
// __builtin_clz(x): This function is used to count the leading zeros of the integer. Note : clz = count leading zero’s 
// __builtin_ctz(x): This function is used to count the trailing zeros of the given integer. Note : ctz = count trailing zeros. 
// Note: Similarly you can use __builtin_ctzl(x) & __builtin_ctzll(x) for long and long long data types.

void masud_valo_hoye_gele_problem_solve_hobe(ll tc)
{
    ii(a)
    vll vc(a);
    for(auto &b: vc) 
    { 
        cin>>b;
    }
    sort(all(vc),greater<>());
    for(int i=1; i<a; i++)
    {
        if(vc[i]!=vc[0])
        {
            cout<<vc[0]+vc[i]<<v;
            break;
        }
    }

    
}

int main()
{
    fastio();
    ii(t); ll tc=0;
    while(t--)
    {
        tc++;
        masud_valo_hoye_gele_problem_solve_hobe(tc);
        cout<<flush;
    }
    return 0;
}