class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        int count=0;
        
         for(auto a:grid)
        {
            vector<int>v1,v2;
            for(int i=0;i<grid.size();i++)
            {  
                for(int j=0;j<grid.size();j++)
                {
                    v1.push_back(grid[j][i]);
                   // v2.push_back(grid[i][j]);
                }
                if(a==v1)
                {
                    count++;
                    
                }
                v1.clear();
               // v2.clear();
                    
            }
            
        }
        
        
        return count;
        
    }
};