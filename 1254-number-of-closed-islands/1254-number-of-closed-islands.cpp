class Solution {
public:
    
    
    void dfs(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || grid[i][j]==1)
            return;
        
        grid[i][j]=1;
        
          dfs(grid,i+1,j);
          dfs(grid,i-1,j);
          dfs(grid,i,j+1);
          dfs(grid,i,j-1);
    }
    
    
    
    
    int closedIsland(vector<vector<int>>& grid) {
        
        int count=0;
        
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(i==0 || j==0 || i==grid.size()-1 || j == grid[i].size()-1)
                {
                    
                    dfs(grid,i,j);
                }
            }
        }
        
           for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==0)
                {
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        
      return count;  
    }
};