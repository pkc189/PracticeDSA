class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       vector<int>dp(cost.size(),-1);
        return min(m(0,cost,dp), m(1,cost,dp));
    }
    
    int m(int i,vector<int>& cost,vector<int>&dp)
    {
     
   
        
        if(i>cost.size()-1)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
          
        int r = cost[i]+m(i+1,cost,dp);
        int l = cost[i]+m(i+2,cost,dp);
        
        return dp[i] = min(r,l);
        
    }
    
};