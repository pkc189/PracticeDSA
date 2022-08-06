class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>p;
        
        for(auto a:nums)
           { p.push(a);
           
           if(p.size()>k)
               p.pop();
           }
        
        return p.top();
        
    }
};