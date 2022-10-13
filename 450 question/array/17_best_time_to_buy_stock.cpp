//TLE

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int n=prices.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int count=prices[j]-prices[i];
                if(count<0)   break;
                maxi=max(count,maxi);
            }
        }
        return maxi;
    }
};