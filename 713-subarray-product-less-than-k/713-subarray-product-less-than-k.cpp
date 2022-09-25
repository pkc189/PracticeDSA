class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int mul=1;
        int count=0;
 if(k<=1)
     return 0;
        
        for(int left=0,right=0;right<nums.size();right++)
        {
            mul*=nums[right];
            
          while(mul>=k)
          {
              mul=mul/nums[left];
              left++;
          }
            count+=right-left+1;
        }
        
        
        return count;
    }
};