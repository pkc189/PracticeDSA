class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        
        int maxm=INT_MAX;
        for(int i=0;i<grid[0].size();i++)
            maxm = min(maxm,run(0,i,grid,dp));
     return maxm;   
    }
    
    
    private:
    
    int run(int row,int start,vector<vector<int>>& grid,vector<vector<int>>&dp)
    {
        if(start<0 || start>grid[0].size()-1)
            return 1e7;
        
        if(row==grid.size()-1)
            return grid[row][start];
        
        int maxm=INT_MAX;
        
        if(dp[row][start]!=-1)
            return dp[row][start];
        
       for(int i=0;i<grid[0].size();i++)
       {
          if(i!=start)
        
               maxm = min(maxm,grid[row][start] +run(row+1,i,grid,dp));
      
       }
        
        return dp[row][start] = maxm;
        
    }
    
};