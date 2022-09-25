class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0,sum=0;
        
      unordered_map<int,int>map;
        map[0]=1;
      
      
        
        for(auto a:nums)
        { 
            sum+=a;
            
           
            if(map[sum-k])
                count+=map[sum-k];
            
            map[sum]++;
        }
        
        
        
        return count;
    }
};