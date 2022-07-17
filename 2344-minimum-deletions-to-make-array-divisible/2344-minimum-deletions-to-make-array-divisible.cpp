class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        
        int g=numsDivide[0];
        
        for(auto a:numsDivide)
            g = __gcd(g, a);
        
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
    
    
     int GCD(int x, int y) {
        int ans = 1;
        
        for(long i = 1; i * i <= x; i++) {
            if(x % i)
                continue;
            if(y % i == 0) {
                ans = max(ans, (int)i);
            } 
            if(y % (x / i) == 0) {
                ans = max(ans, (int)(x / i));
            }
        }
        
        return ans;
    }
    
};