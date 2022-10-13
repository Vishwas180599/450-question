#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1])
               { ans= nums[i];
               break;
               }
        }
        return ans;
    }
};
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        
       for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
           
       }
        unordered_map<int,int> :: iterator it;
        
       for(it=mp.begin();it!=mp.end();it++){
           if(it->second>=2)
               return it->first;
       }
        return 0;
    }
};