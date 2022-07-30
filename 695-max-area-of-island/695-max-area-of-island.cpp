class Solution {
public:
    
    int dfs(vector<vector<int>>& grid,int i,int j,int& count)
    {
        if(i<0 || j<0 || i>=grid.size()||j>=grid[i].size()|| !grid[i][j])
            return count;
        
        grid[i][j]=0;
        count++;
        dfs(grid,i-1,j,count);
        dfs(grid,i+1,j,count);
        dfs(grid,i,j-1,count);
        dfs(grid,i,j+1,count);
        // cout<<count<<endl;
        return count;
        
        
    }
    
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int area=0,a;
        
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                  { 
                    a=0;
                    area = max(dfs(grid,i,j,a),area);
                  
                  
                  }
            }
        }
       
        return area;
        
    }
};