class Solution
{
    public:
        int calculateMinimumHP(vector<vector < int>> &dungeon)
        {
             int n = dungeon.size();
        int m = dungeon[0].size();
vector<vector<int>> dp(n , vector<int>(m , -1));
            return run(0, 0, dungeon,dp);
        }

    int run(int row, int start, vector<vector < int>> &dungeon,vector<vector<int>>& dp)
    {
        if (row == dungeon.size() || start == dungeon[0].size())
            return 1e9;

        if (row == dungeon.size() - 1 && start == dungeon[0].size() - 1)
        {
            
                if (dungeon[row][start] < 0)
                    return 1 + abs(dungeon[row][start]);
            
            else
            {
                return 1;
            }
        }

        
        if(dp[row][start]!=-1)
            return dp[row][start];
        
        int r = run(row, start + 1, dungeon,dp)-dungeon[row][start] ;
        int s =   run(row + 1, start, dungeon,dp)-dungeon[row][start];
        int x = min(r, s);
       	//  cout<<x<<endl;
        return dp[row][start] = x<=0?1:x;
    }
};