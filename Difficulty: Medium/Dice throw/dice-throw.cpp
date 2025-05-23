class Solution {
  public:
    int solve(int face,int dice,int target,vector<vector<int>> &dp){
        if(target<0) return 0;
        if(dice==0 && target!=0) return 0;
        if(dice!=0 && target==0) return 0;
        if(target==0 && dice==0) return 1;
        int ans=0;
        if(dp[dice][target]!=-1) return dp[dice][target];
        
        for(int i=1;i<=face;i++){
            ans+=solve(face,dice-1,target-i,dp);
        }
        return dp[dice][target]= ans;
    }
    int noOfWays(int m, int n, int x) {
        // code here
        vector<vector<int>> dp(n+1,vector<int> (x+1,-1));
        return solve(m,n,x,dp);
    }
};