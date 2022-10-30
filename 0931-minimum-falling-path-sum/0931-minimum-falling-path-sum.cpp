class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int minx=INT_MAX;
        
     vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),-1));
        
        
        
        
        for(int i=0;i<matrix[0].size();i++)
        minx = min(run(0,i,matrix,dp),minx);
        
        return minx;
    }
    
    
   private:
    int run(int row,int start,vector<vector<int>>& matrix,vector<vector<int>>& dp)
    {
        if(start<0 || start>matrix[0].size()-1)
            return 1e7;
        
        if(row==matrix.size()-1)
            return matrix[row][start];
        
        
        if(dp[row][start]!=-1)
            return dp[row][start];
        
        int left = matrix[row][start] + run(row+1,start-1,matrix,dp);
        int same = matrix[row][start] + run(row+1,start,matrix,dp);
        int right = matrix[row][start] + run(row+1,start+1,matrix,dp);
        
        return dp[row][start] = min(right,min(left,same));
    
    }
};