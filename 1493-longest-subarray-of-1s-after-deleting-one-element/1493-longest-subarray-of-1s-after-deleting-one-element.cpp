class Solution {
public:
   int longestSubarray(std::vector<int> nums)
    {
        int res = 0; 
        bool zeroFlag = false;
        for(int l = 0, r = 0; r < nums.size(); r++)
        {  
            if(nums[r] == 0 && zeroFlag) 
                while(nums[l++] != 0)
                {}  
            
            if(nums[r] == 0)
                zeroFlag = true;

            res = std::max(res, r - l + 1);
        }

        return res - 1;
    }
};