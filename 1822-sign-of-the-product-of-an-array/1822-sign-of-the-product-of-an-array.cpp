class Solution {
public:
    
    
    
    int arraySign(vector<int>& nums) {
        
      
  
        
       char mul=1;
        for(auto a:nums)
          { 
            if(a<0)
            mul = - mul;
            
            
           if(a==0)
            return 0;
        
        }
        
        return mul;
    }
};