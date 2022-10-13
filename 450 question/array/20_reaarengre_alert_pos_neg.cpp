//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    queue<int>pos;
	    queue<int > neg;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	           pos.push(arr[i]);
	       else
	          neg.push(arr[i]);
	    }
	    
	    int i=0;
	    
	    while(!pos.empty()||!neg.empty())
	    {
	        if(!pos.empty())
	        {
	            arr[i++]=pos.front();
	            pos.pop();
	        }
	        if(!neg.empty())
	        {
	            arr[i++]=neg.front();
	            neg.pop();
	        }
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends