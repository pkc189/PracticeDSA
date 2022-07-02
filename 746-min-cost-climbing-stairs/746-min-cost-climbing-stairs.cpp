class Solution {
public:
    
    int dp[1000]={0};
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
    // dp = new int[n];
        return min(mincost(cost,n-1),mincost(cost,n-2));
    }
    
    
    int mincost(vector<int>& cost,int n)
    {
        if(dp[n])
            return dp[n];
        if(n<0)
            return 0;
        if(n<2)
            return cost[n];
        return dp[n] =  cost[n] + min(mincost(cost,n-1),mincost(cost,n-2));
    }
    
};