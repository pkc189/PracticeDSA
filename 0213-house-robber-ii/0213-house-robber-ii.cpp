class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        
    if(n<1)
        return nums[0];
        
        return max(house(0,n-1,nums),house(1,n,nums));
        
    }
    
    
  private:
    int house(int start,int last,vector<int>& nums)
    {
        int prev=0,prev2=0;
        for(int i=start;i<=last;i++)
        {
            int curr = max(nums[i]+prev2,prev);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};