class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        
        vector<unordered_set<int>>v(n);
        
        for(auto a:roads)
        {
            v[a[0]].insert(a[1]);
            v[a[1]].insert(a[0]);
            
        }
        
              int count=0;
        
      for(int i=0;i<n;i++)
      {
          for(int j=i+1;j<n;j++)
          {
              int a = v[i].size()+v[j].size();
              
              if(v[i].count(j))
                  a--;
              
              count = max(a,count);
           
              
          }
      }
        
        
  
      return count;  
        
        
    }
};