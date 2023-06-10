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
#define maxall(a)       (*max_element(all(a)))
#define minall(a)       (*min_element(all(a)))
#define invec(a,n)      loop(i,0,n){ii(x) a.pb(x);}
#define inmap(mp,n)     loop(i,0,n){ii(x) mp[x]++;}
#define upperb(a,b)     upper_bound(all(a),b)-a.bb
#define lowerb(a,b)     lower_bound(all(a),b)-a.bb
ll M=1000000007;
//#define test()        ull t;cin>>t;while(t--)
// ll modinv(ll p,ll q)
// {
//     ll mod =1000000007,ex;
//     ex=mod-2;
//     while (ex) {
//         if (ex & 1) {
//             p = (p * q) % mod;
//         }
//         q = (q * q) % mod;
//         ex>>= 1;
//     }
//     return p;
// }

// __builtin_popcount(x): This function is used to count the number of one’s(set bits) in an integer. for long long __builtin_popcountll(x)
// __builtin_parity(x): This function is used to check the parity of a number. This function returns true(1) if the number has odd parity else it returns false(0) for even parity. 
// __builtin_clz(x): This function is used to count the leading zeros of the integer. Note : clz = count leading zero’s 
// __builtin_ctz(x): This function is used to count the trailing zeros of the given integer. Note : ctz = count trailing zeros. 
// Note: Similarly you can use __builtin_ctzl(x) & __builtin_ctzll(x) for long and long long data types.

void masud_valo_hoye_gele_problem_solve_hobe(ll tc)
{
    ii(a)
    ll box[a];
    loop(i,0,a) cin>>box[i];
    ll tab[box[a-1]];
    loop(i,0,box[a-1])
    {
        tab[i]=1;
    }
    //cout<<tab[2]<<v;
    for(ll i=1; i<a; i=i+2)
    {
        for(ll j=box[i]-1; j>=box[i-1]; j--)
        {
            tab[j]=0;
        }
    }
    ll ans[box[a-1]],sum=0;
    loop(i,0,box[a-1])
    {
        sum+=tab[i];
        ans[i]=sum;
    }
    ii(b)
    while(b--)
    {
        ii(aa) ii(cc)
        //cout<<ans[cc]<<" "<<ans[aa]<<v;
        cout<<ans[cc-1]-ans[aa]+tab[aa]<<v;
    }
    //cout<<"Case "<<tc<<": "<<
}

int main()
{
    fastio();
    ll t=1;
    //cin>>t;
    ll tc=0;
    while(t--)
    {
        tc++;
        masud_valo_hoye_gele_problem_solve_hobe(tc);
        cout<<flush;
    }
    return 0;
}