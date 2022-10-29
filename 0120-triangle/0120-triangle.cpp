class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
 vector<vector<int>>dp(triangle.size(),vector<int>(triangle.size(),-1));

        
        return run(0,0,triangle,dp);
    }
    
    
   private:
    int run(int ind,int i,vector<vector<int>>& t,vector<vector<int>>&dp)
    {
        if(ind==t.size()-1 )
            return t[ind][i];
        
        if(ind>t.size()-1)
            return 1e7;
        
        if(dp[ind][i]!=-1)
            return dp[ind][i];
        
     
            int r = t[ind][i] + run(ind+1,i,t,dp);
            int l = t[ind][i] + run(ind+1,i+1,t,dp);
            
  return dp[ind][i] =  min(r,l);
        
      
    }
};