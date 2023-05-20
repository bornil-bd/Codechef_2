//b0rnil
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define v '\n'
#define pb(a) push_back(a);
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define loop(a,b,c) for(ull(a)=(b); (a)<(c); (a)++)
#define test() ull t;cin>>t;while(t--)
void rpermute(int index,vector<int> &nums, vector<vector<int>> & ans)
{
    if(index==nums.size())
    {
        ans.pb(nums);
        return;
    }
    loop(i,index,nums.size())
    {
        swap(nums[index],nums[i]);
        rpermute(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }
}
vector<vector<int>>permute(vector<int>  &nums)
{
    vector<vector<int>> ans;
    rpermute(0,nums,ans);
    return ans;
}
int main()
{
    fastio();
    int x;
    vector<int>nums;
    loop(i,0,10)
    {
        cin>>x;
        nums.pb(x);
    }
    permute(nums);
    
    return 0;
}