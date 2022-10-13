//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string stk)
    {      // Your code here
            // Your code here
        stack<char> s;
        if(stk.size()&1) return false;
        int i=0;
        while(i<stk.size()){
            if(stk[i]=='(' || stk[i]=='[' || stk[i]=='{'){
                s.push(stk[i]);
            }
        else{
            if(s.size()==0) return false;
            char c = s.top();
            if(stk[i]==')'){
                if(c!='(') return false;
            }
            else if(stk[i]==']'){
                if(c!='[') return false;
            }
            else{
                if(c!='{') return false;
            }
            s.pop();
        }
        i++;
    }
    return (s.empty());
    }

    

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends