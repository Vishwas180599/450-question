//TLE

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// // Function to return minimum number of jumps to end of array

// class Solution{
//   public:
//     int minJumps(int arr[], int n){
//         // Your code here
        
//         int count=0;
//         int i=0;
//         while(i<n){
//             int temp=arr[i];
//             if(arr[i+temp]>=n-1){
//                 count ++;
//                 return count;
//             }
//             else if(arr[i+temp]<n-1){
//                 count ++;
//                 i+=temp;
                
//             }
//             else if(arr[i]==0)
//                return -1;
               
            
//         }
//         return count;
      
//     }
// };


// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,i,j;
//         cin>>n;
//         int arr[n];
//         for(int i=0; i<n; i++)
//             cin>>arr[i];
//         Solution obj;
//         cout<<obj.minJumps(arr, n)<<endl;
//     }
//     return 0;
// }

// // } Driver Code Ends