#include <vector>
#include <algorithm>

class Solution {
public:
    int cutRod(std::vector<int> &price) {
        int n = price.size();
        std::vector<int> dp(n + 1, 0);

        for (int l = 1; l <= n; l++) {
            for (int i = 1; i <= l; i++) {
                dp[l] = std::max(dp[l], price[i - 1] + dp[l - i]);
            }
        }
        return dp[n];
    }
};

 /* class solution{
    public:
    vector<int> dp;
    int fun(vector<int> &price,int n,vector<int> &dp){
        if(n==0)return dp[0=0;
        else if(dp[n]!=0)return dp[n];
        int res=0;
        for(int i=1;i<n;i++){
            res=max(res,price[i-1]+fun(price,n-i,dp));
        }
        return dp[n]=res;
    }
    int cutrod(vector<int> &price){
        int n=price.size();
        dp,resize(n+1,0);
        int x=fun(price,n,dp);
        return x;
    }
};*/