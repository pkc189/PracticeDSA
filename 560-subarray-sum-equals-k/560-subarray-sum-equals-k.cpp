class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       
        
        unordered_map<int,int>map;
        
        int sum=0,count=0;
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