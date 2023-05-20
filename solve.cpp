
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
void rearrange(int arr[], int n) {
	    
	}

int main() {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int>pos,neg;
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i]>=0) pos.emplace_back(arr[i]);
	        else neg.emplace_back(arr[i]);
	    }
	    int p=pos.size();
	    int ne=neg.size();
        cout<<p<<" "<<ne<<'\n';
	    if(p<n)
	    {
	        for(int i=0; i<p; i++)
	        {
	            arr[2*i]=pos[i];
	            arr[2*i+1]=neg[i];
	        }
	        int next=p*2;
	        for(int i=p; i<ne; i++)
	        {
	            arr[next]=neg[i];
	            next++;
	        }
	    }
	    else
	    {
	        for(int i=0; i<ne; i++)
	        {
	            arr[2*i]=pos[i];
	            arr[2*i+1]=neg[i];
	        }
	        int next=ne*2;
	        for(int i=ne; i<p; i++)
	        {
	            arr[next]=pos[i];
	            next++;
	        }
	    }
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    return 0;
}

// } Driver Code Ends