class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long count=0,good=0;
         
        unordered_map<int,int>map;
          long long n = nums.size();
        
        
        for(int i=0;i<nums.size();i++)
        {
            long long diff = i-nums[i];
            
            if(map.count(diff)==1)
            {
                good+=map[diff];
                map[diff]++;
            }else
            {
                map[diff]=1;
            }
            
            
        }
       
      
        
        
        return (n*(n-1)/2)-good;
    }
};