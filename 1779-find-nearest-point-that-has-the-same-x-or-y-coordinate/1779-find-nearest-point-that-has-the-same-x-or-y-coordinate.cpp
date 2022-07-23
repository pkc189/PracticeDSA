class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int diff = x+y;
        
        int min = INT_MAX;
        int count = -1;
        
        for(int i=0;i<points.size();i++)
        {
            int a = points[i][0];
            int b =points[i][1];
            if(x==a || y ==b)
            
          {  int sum = a+b;
            
            if(abs(sum-diff)<min)
            {
                count=i;
                min = abs(sum-diff);
            }}
            
            
        }
        
        
        return count;
    }
};