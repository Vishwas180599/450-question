// // //{ Driver Code Starts
// // #include<bits/stdc++.h>
// // using namespace std;



// // // } Driver Code Ends
// // class Solution
// // {
// //     public:
// //     void sort012(int a[], int n)
// //     {
// //         // code here 
// //         int zeroCount=0;
// //         int oneCount=0;
// //         int twoCount=0;
        
// //         for(int i=0;i<n;i++){
// //             if(a[i]==0)
// //                zeroCount++;
// //             else if(a[i]==1)
// //                oneCount++;
// //             else 
// //                twoCount++;
// //         }
        
       
// //             for(int j=0;j<zeroCount;j++){
// //                 a[j]=0;
// //             }
// //             for(int k= zeroCount;k<(zeroCount + oneCount);k++){
// //                 a[k]=1;
// //             }
// //             for(int m=(zeroCount+oneCount);m<n;m++)
// //                a[m]=2;
        
// //     }
    
// // };

// // //{ Driver Code Starts.
// // int main() {

// //     int t;
// //     cin >> t;

// //     while(t--){
// //         int n;
// //         cin >>n;
// //         int a[n];
// //         for(int i=0;i<n;i++){
// //             cin >> a[i];
// //         }

// //         Solution ob;
// //         ob.sort012(a, n);

// //         for(int i=0;i<n;i++){
// //             cout << a[i]  << " ";
// //         }

// //         cout << endl;
        
        
// //     }
// //     return 0;
// // }


// // // } Driver Code Ends
// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;



// // } Driver Code Ends
// class Solution
// {
//     public:
//     void sort012(int a[], int n)
//     {
//         // code here 
//         int s=0;
//         int e=n-1;
        
//         while(s<=e){
//             if(a[s]==0||a[s]==1)
//                s++;
//             else if(a[s]==2&&a[e]!=2){
//                 swap(a[s],a[e]);
//                 s++;
//                 e--;
//             }
//             else{
//                 e--;
//             }
//         }
//         s=0;
//         e=n-1;
        
//         while(s<=e){
//             if(a[e]==1||a[e]==2)
//                e--;
//             else if(a[e]==0&&a[s]!=0)
//               swap(a[e--],a[s++]);
//             else
//                s++;
//         }
//     }
    
// };

// //{ Driver Code Starts.
// int main() {

//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >>n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//         }

//         Solution ob;
//         ob.sort012(a, n);

//         for(int i=0;i<n;i++){
//             cout << a[i]  << " ";
//         }

//         cout << endl;
        
        
//     }
//     return 0;
// }


// // } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int s=0;
        int e=n-1;
        int mid=0;
        
        while(mid<=e){
            if(a[mid]==0){
                swap(a[mid++],a[s++]);
            }else if(a[mid]==1)
                mid++;
            else{
                swap(a[mid],a[e--]);
            }
        }
        
       
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends