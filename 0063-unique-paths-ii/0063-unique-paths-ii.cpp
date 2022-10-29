class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i=0,j=0;
        vector<vector<int>>dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),-1));
        return run(i,j,obstacleGrid,dp);
    }
    
    private:
    
    int run(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp){
        
       
        if(i>grid.size()-1 || j>grid[0].size()-1 || grid[i][j]==1)
            return 0;
        
        if(i==grid.size()-1 && j==grid[0].size()-1)
            return 1;
        
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        return dp[i][j] =  run(i+1,j,grid,dp)+run(i,j+1,grid,dp);
        
        
    }
    
    
};