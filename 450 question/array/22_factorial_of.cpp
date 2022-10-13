//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    void multiply(int n,vector<int>&number)
    {
        int carry = 0;
        for (int i = 0; i < number.size(); i++) 
        {
            int num = n * number[i];
            number[i] = ((num + carry) % 10);
            carry = (num + carry) / 10;
        }
        while (carry) 
        {
            number.push_back(carry % 10);
            carry /= 10;
        }
    }
public:
    vector<int> factorial(int N){
        // code here
        vector<int>number;
        number.push_back(1);
        
        for(int i=2;i<=N;i++)
        {
            multiply(i,number);
        }
        reverse(number.begin(),number.end());
        
        return number;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends