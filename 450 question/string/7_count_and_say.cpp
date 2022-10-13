#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        string str="11";
        for(int i=3;i<=n;i++)
        {
            
            int count=1;
            string temp="";
            
            for(int j=1;j<=str.size();j++)
            {
                if(str[j]!=str[j-1])
                {
                    temp +=to_string(count);
                    
                    temp+=str[j-1];
                    count=1;
                }
                else
                    count++;
            }
            str=temp;
        }
        return str;
    }
};