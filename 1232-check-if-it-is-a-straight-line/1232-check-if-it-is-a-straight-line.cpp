class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        
        if(c.size()==2)
            return true;
        
        int x1 = c[0][0];
         int y1 = c[0][1];
         int x2 = c[1][0];
         int y2 = c[1][1];
        
        int dx = x2-x1,dy=y2-y1;
        
   
        int n = c.size();
   
        for(int i=0;i<n;i++)
        {
          
         int x = c[i][0];
         int y = c[i][1];
            
          bool f=  dx*(y-y1) == dy*(x-x1);
            if(!f)
                return false;
            
        }
        
        return true;
        
    }
};

