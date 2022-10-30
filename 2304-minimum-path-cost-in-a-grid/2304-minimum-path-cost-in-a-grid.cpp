class Solution
{
    public:
        int minPathCost(vector<vector < int>> &grid, vector< vector< int>> &moveCost)
        {
                 
            vector< vector< int>> dp(moveCost.size(),vector<int>(moveCost[0].size(),-1));
        int minx = INT_MAX;
            
            for(int i=0;i<moveCost[0].size();i++)
             minx = min(minx,run(0, i, grid, moveCost,dp));
            return minx;
        }

    int run(int row, int start, vector<vector < int>> &grid, vector< vector< int>> &moveCost,vector< vector< int>> &dp)
    {
        
        
        int minx = INT_MAX;

        // if (row > grid.size() - 1 || start < 0 || start > grid[0].size()-1)
        //     return 1e6;

        if(row == grid.size()-1)
            return grid[row][start];
        
        if(dp[row][start]!=-1)
            return dp[row][start];
        
        for (int i = 0; i < moveCost[0].size(); i++)
        {
            minx =  min(minx, grid[row][start] +moveCost[grid[row][start]][i]+  run(row + 1,i , grid, moveCost,dp));
        }

        return dp[row][start] = minx;
    }
};