class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        k--;
        
        priority_queue<int>pq;
        
        
        for(auto a:nums)
            pq.push(a);
        
        
        
        int n = pq.size();
        int maxm = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-k;i++)
        {
            
            
            maxm = min(abs(nums[i]-nums[i+k]),maxm);
        }
        
        
        
        
        return maxm;
        
    }
};

