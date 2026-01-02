class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        return solve(0,n,dp);
        
    }
    int solve(int i,int n, vector<int> &dp){
        if (i>n) return 0;
        if (i==n) return 1;
        if (dp[i]>0) return dp[i];
        dp[i] = solve(i+1,n,dp)+solve(i+2,n,dp);
        return dp[i];
    }
};