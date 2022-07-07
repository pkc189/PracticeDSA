class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>v1,v2,res;
        
  for(auto a:nums)
  {
      if(a>0)
          v1.push_back(a);
      else v2.push_back(a);
  }
        
        for(int i=0;i<v1.size()&&v2.size();i++)
        {
            res.push_back(v1[i]);
            res.push_back(v2[i]);
            
        }
        
        
        return res;
        
        
    }
};


 
    
    
    
    