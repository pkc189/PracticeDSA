class Solution {
public:
    
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i,int j,int &res)
    {
        if(i<0 || i>=grid1.size() || j<0 || j>=grid1[i].size() || grid2[i][j] == 0)
            return;
        
      if(grid1[i][j]==0 && grid2[i][j]==1)
          res=0;
        
      
        grid2[i][j]=0;
        
        dfs(grid1,grid2,i+1,j,res);
        dfs(grid1,grid2,i-1,j,res);
        dfs(grid1,grid2,i,j+1,res);
        dfs(grid1,grid2,i,j-1,res);
        
        
        
        
    }
    
    
    
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
        int count=0,res=0;
        for(int i=0;i<grid1.size();i++)
        {
            for(int j=0;j<grid1[i].size();j++)
            {
                if(  grid2[i][j]==1&& grid1[i][j]==1)
                {
                    res=1;
                 
                    dfs(grid1,grid2,i,j,res);
                    
                    count+=res;
                }
            }
        }
        
        return count;
        
    }
};