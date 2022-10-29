class Solution
{
    public:
        int minPathSum(vector<vector < int>> &grid)
        {
            vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
            return run(0, 0, grid,dp);
        }

    private:

        int run(int i, int j, vector<vector < int>> &grid,vector<vector<int>>&dp)
        {
            if (i == grid.size() - 1 && j == grid[0].size() - 1)

                return grid[i][j];

            if (i > grid.size() - 1 || j > grid[0].size() - 1)
                return 1e6;

            
            if(dp[i][j]!=-1)
                return dp[i][j];
            
            long long int right = grid[i][j] + run(i, j + 1, grid,dp);
            long long down = grid[i][j] + run(i + 1, j, grid,dp);

            return dp[i][j]=min(right, down);
        }
};