// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t; cin>>t;
// 	while(t--){
// 	    int n; cin>>n;
	  
// 	    map<int,int>m;
// 	    for(int i=0;i<n;i++){
// 	        int x; cin>>x;
// 	        m[x]++;
// 	    }
// 	    if(n==1 or n==2){
// 	        cout<<"0\n";
// 	        continue;
// 	    }
// 	    int maxcount=INT_MIN;
// 	    for(auto &i: m){
// 	        maxcount = max(maxcount, i.second);
// 	    }
// 	    if(maxcount ==1)
// 	        maxcount++;
	        
// 	    cout<<n-maxcount<<endl;
// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
#define ll long long
#define fora(i,m,n)  for(int i=m;i<n;i++)
using namespace std;

void solve(){
    ll n;
	cin>>n;
	
	vector<ll>v(n),out;
	fora(i,0,n)
	    cin>>v[i];
	   
	map<ll,ll>mp;
	fora(i,0,n)
	    mp[v[i]]++;
	    //calculating the frequencies of the distinct elements of the input array
	
	for(auto &val: mp)
	    out.push_back(val.second);
	    //pushing the frequencies in another array
	    
	sort(out.begin(),out.end(),greater<int>());
    
	ll temp=0;
    if(out[0]>1){
    //if the maximum frequency is greater than zero then the that element must be preserved and rest elements are removed
    //as any other element in the array will never have same difference say we have array 2 1 2 2 2 so if 1 remains we will have two distinct differences i.e. 0,1 so element 1 has to be eliminated
        temp=0;
        fora(i,1,out.size())
        //the frequencies of rest elements are calculated that has to be removed
            temp+=out[i];
    }
    
	else{
	//the max frequency can either be 1 or >1 so if the max frequency is 1 so the remaining elements present will also have frequency 1
	//so any two elements can only exists so there can be a unique hence only one difference value
	    temp=0;
        fora(i,2,out.size())
            temp+=out[i];
	}
	cout<<temp;
	//answer
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    solve();
	    cout<<endl;
	}
	return 0;
}