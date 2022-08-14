class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        k--;
        

 
        int maxm = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-k;i++)
        {
            
            
            maxm = min(abs(nums[i]-nums[i+k]),maxm);
        }
        
        
        
        
        return maxm;
        
    }
};

