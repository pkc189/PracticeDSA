class Solution {
public:
    
    
    
    int arraySign(vector<int>& nums) {
        
      
  
        
       int mul=1;
        for(auto a:nums)
          { 
            if(a<0)
            mul = mul*-1;
            
            
           if(a==0)
            return 0;
        
        }
        
        return mul;
    }
};