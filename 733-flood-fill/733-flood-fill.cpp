class Solution {
public:
    
    
   void dfs( vector<vector<int>>& image,int i,int j,int c,int a)
    {
        
        if(i<0 || j<0 || j>=image[0].size() || i>=image.size() ||image[i][j]!=a ||image[i][j]==c )
return;
        
        image[i][j]=c;
            dfs(image,i+1,j,c,a);
            dfs(image,i-1,j,c,a);
            dfs(image,i,j-1,c,a);
            dfs(image,i,j+1,c,a);
        
    }
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int a = image[sr][sc];
     
        if(a==color)
            return image;
                dfs(image,sr,sc,color,a);
        
        
       return image; 
    }
};