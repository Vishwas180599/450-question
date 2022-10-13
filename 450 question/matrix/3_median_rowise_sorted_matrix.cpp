//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here    
        int row=matrix.size();
        int col=matrix[0].size();
        int mid=0;
        int x;
        vector<int>res;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                int val=matrix[i][j];
                res.push_back(val);
            }
        }
        sort(res.begin(),res.end());
        
        for(int i=0;i<res.size();i++)
        {
            if(res.size()%2!=0)
            {
                mid=res.size()/2;
                x=res[mid];
                
            }
            else{
                mid=(res.size()/2)+1;
                x=res[mid];
            }
            
        }
        return x;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}
// } Driver Code Ends