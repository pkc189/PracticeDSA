class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c=0;
        
        for(auto a:nums)
            c^=a;
        
        return c;
    }
};