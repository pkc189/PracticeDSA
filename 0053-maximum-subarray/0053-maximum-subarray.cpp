class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxm=nums[0];
        int sum=0;
        
        
        for(auto a:nums)
        {
            sum+=a;
            
            
                maxm=max(maxm,sum);
           if(sum<0)
           sum=0;
        }
   
       return maxm; 
    }
};