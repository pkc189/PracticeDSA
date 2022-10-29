class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=1;
        int minx=0;
        
        while(right<prices.size())
        {
            while(prices[right]<prices[left])
                left++;
            minx = max(prices[right]-prices[left],minx);
              right++;  
            
        }
        return minx;
        
    }
};