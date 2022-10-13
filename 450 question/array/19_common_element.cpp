//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
        {
            vector<int >res;
    // Initialize starting indexes for ar1[], ar2[] and ar3[]
    int i = 0, j = 0, k = 0;
 
    // Declare three variables prev1, prev2, prev3 to track
    // previous element
    int prev1, prev2, prev3;
 
    // Initialize prev1, prev2, prev3 with INT_MIN
    prev1 = prev2 = prev3 = INT_MIN;
 
    // Iterate through three arrays while all arrays have
    // elements
    while (i < n1 && j < n2 && k < n3) {
 
        // If ar1[i] = prev1 and i < n1, keep incrementing i
        while (ar1[i] == prev1 && i < n1)
            i++;
 
        // If ar2[j] = prev2 and j < n2, keep incrementing j
        while (ar2[j] == prev2 && j < n2)
            j++;
 
        // If ar3[k] = prev3 and k < n3, keep incrementing k
        while (ar3[k] == prev3 && k < n3)
            k++;
 
        // If x = y and y = z, print any of them, update
        // prev1 prev2, prev3 and move ahead in each array
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
            //cout << ar1[i] << " ";
            res.push_back(ar1[i]);
            prev1 = ar1[i++];
            prev2 = ar2[j++];
            prev3 = ar3[k++];
        }
 
        // If x < y, update prev1 and increment i
        else if (ar1[i] < ar2[j])
            prev1 = ar1[i++];
 
        // If y < z, update prev2 and increment j
        else if (ar2[j] < ar3[k])
            prev2 = ar2[j++];
 
        // We reach here when x > y and z < y, i.e., z is
        // smallest update prev3 and increment k
        else
            prev3 = ar3[k++];
    }
    return res;
}
 

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends