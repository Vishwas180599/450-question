// //{ Driver Code Starts
// #include <bits/stdc++.h> 
// using namespace std; 


// // } Driver Code Ends
// class Solution{
//     public:
//         //Function to merge the arrays.
//         void merge(long long arr1[], long long arr2[], int n, int m) 
//         { 
//             // code here 
//            int j=0;
//            vector<long long>v;
           
//            for(int i=0;i<n;i++){
//                v.push_back(arr1[i]);
//            }
           
//            for(int i=0;i<m;i++){
//                v.push_back(arr2[i]);
//            }
           
//            sort(v.begin(),v.end());
           
//            for(int i=0;i<v.size();i++){
//               if(i<n){
//                   arr1[i]=v[i];
//               }else{
//                   arr2[j]=v[i];
//                   j++;
//               }
//            }
           
        
//         } 
// };

// //{ Driver Code Starts.

// int main() 
// { 
	
// 	int T;
// 	cin >> T;
	
// 	while(T--){
// 	    int n, m;
// 	    cin >> n >> m;
	    
// 	    long long arr1[n], arr2[m];
	    
// 	    for(int i = 0;i<n;i++){
// 	        cin >> arr1[i];
// 	    }
	    
// 	    for(int i = 0;i<m;i++){
// 	        cin >> arr2[i];
// 	    }
// 	    Solution ob;
// 	    ob.merge(arr1, arr2, n, m); 

//         for (int i = 0; i < n; i++) 
//             cout<<arr1[i]<<" "; 
        
       
// 	    for (int i = 0; i < m; i++) 
// 		    cout<<arr2[i]<<" "; 
	    
// 	    cout<<endl;
// 	}

// 	return 0; 
// } 

// // } Driver Code Ends

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here
            int i=0,j=0;
           int  k=n-1;
            while(i<=k&&j<m){
                if(arr1[i]<=arr2[j]){
                    i++;
                }else{
                    swap(arr1[k--],arr2[j++]);
                }
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            return;
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends