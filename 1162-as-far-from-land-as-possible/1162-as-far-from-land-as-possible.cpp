class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        
        int locMax=0;
        queue<pair<int,int>>q;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                    q.push({i,j});
            }
        }
        
        while(!q.empty())
        {
            
            auto curr = q.front();
            
            
            
            pair<int,int> dirs[4] = {{0,1},{1,0},{0,-1},{-1,0}};
            
            for(auto a:dirs)
                {
                    int nx = a.first + curr.first;
                    int ny = a.second + curr.second;
                    
                    if(nx>=0 && nx<grid.size() && ny>=0 && ny<grid[0].size() && grid[nx][ny]==0)
                    {
                        q.push({nx,ny});
                        grid[nx][ny] = grid[curr.first][curr.second]+1;
                        
                        locMax = max(locMax,grid[nx][ny]);
                        
                    }
                    
                    
                    
                }
                
            
            
            
           
            q.pop();
        }
        
        
        
      return locMax>0?locMax-1:-1;  
        
    }
};