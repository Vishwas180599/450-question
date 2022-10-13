//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int>ans;
        
       int startRow=0;
       int startCol=0;
       int endRow=r-1;
       int endCol=c-1;
       
       int start=0;
       int end=r*c;
       
       while(start<end)
       {
           for(int i=startCol;start<end && i<=endCol;i++)
           {
               ans.push_back(matrix[startRow][i]);  
               start++;
           }
           startRow++;
           for(int i=startRow;start<end && i<=endRow;i++)
           {
               ans.push_back(matrix[i][endCol]);
               start++;
           }
           endCol--;
           for(int i=endCol;start<end && i>=startCol;i--)
           {
               ans.push_back(matrix[endRow][i]);
               start++;
           }
           endRow--;
           for(int i=endRow;start<end && i>=startRow;i--)
           {
               ans.push_back(matrix[i][startCol]);
               start++;
           }
           startCol++;
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends