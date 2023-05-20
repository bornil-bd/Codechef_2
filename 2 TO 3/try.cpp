#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        if(b==1 and n!=1){
            cout<<-1<<endl;
        } else {
            for(int i=0;i<b-1;i++){
                cout<<i+1<<" ";
            }
            for(int i=n;i>=b;i--){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        
    }
	// your code goes here
	return 0;
}