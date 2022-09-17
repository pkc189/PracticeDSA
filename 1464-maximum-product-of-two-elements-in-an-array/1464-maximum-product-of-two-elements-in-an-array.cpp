class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>p;
        
        for(auto a:nums)
            p.push(a);
        
       int a =  p.top()-1;
        p.pop();
       int b =  p.top()-1;
        
        return a*b;
        
    }
};