class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        return atmost(nums,goal)  - atmost(nums,goal-1);
    }
    
    
    
    int atmost(vector<int>& nums, int goal)
    {
        int i=0,j=0,count=0,sum=0;
        int size = nums.size();
        if(goal<0)
            return 0;
        while(j<size)
        {
            sum = sum + nums[j];
            
            while(sum>goal)
            {
                sum = sum - nums[i];
                i++;
            }
            count+=j-i+1;
            j++;
        }
        
        return count;
    }
    
};