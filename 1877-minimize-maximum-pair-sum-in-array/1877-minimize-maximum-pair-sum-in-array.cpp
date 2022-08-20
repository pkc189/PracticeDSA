class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        
       int i=0,maxm=INT_MIN;
        int j = nums.size()-1;
        while(i<j)
        {
            maxm = max(maxm,(nums[i]+nums[j]));
            i++;
            j--;
            
        }
        
        return maxm;
        
    }
};

