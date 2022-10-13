// //TLE
// //{ Driver Code Starts
// // A C++ program to find if there is a zero sum
// // subarray
// #include <bits/stdc++.h>
// using namespace std;



// // } Driver Code Ends
// class Solution{
//     public:
//     //Complete this function
//     //Function to check whether there is a subarray present with 0-sum or not.
//     bool subArrayExists(int arr[], int n)
//     {
//         //Your code here
//         for(int i=0;i<n;i++)
//         {
//             int sum=arr[i];
//             if(sum==0)
//                return true;
//             for(int j=i+1;j<n;j++)
//             {
//                 sum+=arr[j];
//                 if(sum==0)
//                    return true;
//             }
//         }
//         return false;
//     }
// };

// //{ Driver Code Starts.
// // Driver code
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++)
// 	    cin>>arr[i];
// 	    Solution obj;
// 	    	if (obj.subArrayExists(arr, n))
// 		cout << "Yes\n";
// 	else
// 		cout << "No\n";
// 	}
// 	return 0;
// }
// // } Driver Code Ends
//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int prefixSum=0;
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            prefixSum+=arr[i];
            
            if(prefixSum==0||s.find(prefixSum)!=s.end())
               return true;
               
            s.insert(prefixSum);
        }
        return false;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends