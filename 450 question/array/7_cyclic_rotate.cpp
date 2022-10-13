// // // // // //{ Driver Code Starts
// // // // // //Initial Template for C++

// // // // // #include <bits/stdc++.h>
// // // // // using namespace std;
// // // // // void rotate(int arr[], int n);

// // // // // int main()
// // // // // {
// // // // //     int t;
// // // // //     scanf("%d",&t);
// // // // //     while(t--)
// // // // //     {
// // // // //         int n;
// // // // //         scanf("%d",&n);
// // // // //         int a[n] , i;
// // // // //         for(i=0;i<n;i++)
// // // // //         scanf("%d",&a[i]);
// // // // //         rotate(a, n);
// // // // //         for (i = 0; i < n; i++)
// // // // //             printf("%d ", a[i]);
// // // // //         printf("\n");
// // // // //     }
// // // // //         return 0;
// // // // // }

// // // // // // } Driver Code Ends


// // // // // //User function Template for C++

// // // // // void rotate(int arr[], int n)
// // // // // {
// // // // //     int temp=arr[n-1];
// // // // //     int a[n];
// // // // //     for(int i=1;i<n;i++){
// // // // //         a[i]=arr[i-1];
// // // // //     }
// // // // //     a[0]=temp;
// // // // //     for(int i=0;i<n;i++){
// // // // //         arr[i]=a[i];
// // // // //     }
    
// // // // // }
// // // // //{ Driver Code Starts
// // // // //Initial Template for C++

// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // void rotate(int arr[], int n);

// // // // int main()
// // // // {
// // // //     int t;
// // // //     scanf("%d",&t);
// // // //     while(t--)
// // // //     {
// // // //         int n;
// // // //         scanf("%d",&n);
// // // //         int a[n] , i;
// // // //         for(i=0;i<n;i++)
// // // //         scanf("%d",&a[i]);
// // // //         rotate(a, n);
// // // //         for (i = 0; i < n; i++)
// // // //             printf("%d ", a[i]);
// // // //         printf("\n");
// // // //     }
// // // //         return 0;
// // // // }

// // // // // } Driver Code Ends


// // // // //User function Template for C++

// // // // void rotate(int arr[], int n)
// // // // {
// // // //     int temp=arr[n-1];
// // // //     for(int i=n-1;i>=0;i--)
// // // //        arr[i]=arr[i-1];
// // // //     arr[0]=temp;
    
// // // // }
// // // //{ Driver Code Starts
// // // //Initial Template for C++

// // // #include <bits/stdc++.h>
// // // using namespace std;
// // // void rotate(int arr[], int n);

// // // int main()
// // // {
// // //     int t;
// // //     scanf("%d",&t);
// // //     while(t--)
// // //     {
// // //         int n;
// // //         scanf("%d",&n);
// // //         int a[n] , i;
// // //         for(i=0;i<n;i++)
// // //         scanf("%d",&a[i]);
// // //         rotate(a, n);
// // //         for (i = 0; i < n; i++)
// // //             printf("%d ", a[i]);
// // //         printf("\n");
// // //     }
// // //         return 0;
// // // }

// // // // } Driver Code Ends


// // // //User function Template for C++

// // // void rotate(int arr[], int n)
// // // {
// // //     int j=0;
// // //     int temp=arr[j];
// // //     arr[j]=arr[n-1];
// // //     for(int i=1;i<n;i++)
// // //       swap(arr[i],temp);
    
    
    
// // // }
// // //{ Driver Code Starts
// // //Initial Template for C++

// // #include <bits/stdc++.h>
// // using namespace std;
// // void rotate(int arr[], int n);

// // int main()
// // {
// //     int t;
// //     scanf("%d",&t);
// //     while(t--)
// //     {
// //         int n;
// //         scanf("%d",&n);
// //         int a[n] , i;
// //         for(i=0;i<n;i++)
// //         scanf("%d",&a[i]);
// //         rotate(a, n);
// //         for (i = 0; i < n; i++)
// //             printf("%d ", a[i]);
// //         printf("\n");
// //     }
// //         return 0;
// // }

// // // } Driver Code Ends


// // //User function Template for C++

// // void rotate(int arr[], int n)
// // {
// //     int i = 0, j = n-1; // i and j pointing to first and last element respectively
// //       while(i <= j){
// //       swap(arr[i], arr[j]);
// //       i++;
// //       }
    
