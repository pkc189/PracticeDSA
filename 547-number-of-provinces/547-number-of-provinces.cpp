class Solution {
public:
    
    
    void dfs(vector<vector<int>>& isConnected,int i,vector<int>&vis)
    {vis[i]=true;
          for(int j=0;j<isConnected.size();j++)
             if(!vis[j]&&isConnected[i][j]&&i!=j)
                {
                    dfs(isConnected,j,vis);
                     
                }
    }
    
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int>vis(isConnected.size(),0);
        int count=0;
        for(int i=0;i<isConnected.size();i++)
         {    if(!vis[i])
                {
                    dfs(isConnected,i,vis);
                    count++;
                }}
               
            
        return count;
        
    }
};