#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    long n;
	    long a=pow(2,32);
	    long b=pow(2,33);
	    cin>>n;
	    if(n==0)cout<<"1 3 4 5"<<endl;
	    else if(n==1)cout<<"1 4 3 2"<<endl;
	    else{
	        if(n%2==0)
	        cout<<a<<" "<<b<<" "<<1<<" "<<n+1<<endl;
	        else cout<<a<<" "<<b<<" "<<1<<" "<<n-1<<endl;
	    }
	    
	    
	}
	return 0;
}