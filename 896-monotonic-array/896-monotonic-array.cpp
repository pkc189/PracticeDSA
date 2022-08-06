class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int count=0,dup=0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
            if(nums[i-1]<nums[i])
                count++;
          
            else count--;}
            else dup++;
        }
        
       return abs(count)==nums.size()-(1+dup)?1:0; 
    }
};