class Solution
{
    public:
        int uniquePaths(int m, int n)
        {
            vector<vector<int>>v(m,vector<int>(n,-1));

            return dp(m - 1, n - 1, m, n,v);
        }

    private:

        int dp(int i, int j, int m, int n,vector<vector<int>>&v)
        {
          
        
            
            if (i == 0 && j == 0)
                return 1;

            if (i < 0 || j < 0)
                return 0;

                if(v[i][j]!=-1)
                return v[i][j];
            
            
            else
                return v[i][j] =dp(i - 1, j, m, n,v) + dp(i, j - 1, m, n,v);
        }
};