class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> a;
        int i;
        int s = nums.size();
        for(i = 0;i<2*s;i++)
        {
            if(i<nums.size())
            a.push_back(nums[i]);
            
            else 
                a.push_back(nums[i-s]);
        }
        
        return a;
        
    }
};