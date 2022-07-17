class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        
        int g=numsDivide[0];
        
        for(auto a:numsDivide)
            g=gcd(g,a);
        
        sort(nums.begin(),nums.end());
   
        
        for(int i=0;i<nums.size()&&nums[i]<=g;i++)
        {
            
            
            if(g%nums[i]==0)
            {
                cout<<nums[i];
                  return i;
            }
              
        }
        
        
        
        return -1;
        
        
    }
};