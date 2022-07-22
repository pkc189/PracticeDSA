class Solution {
public:
    double average(vector<int>& salary) {
        int minm = INT_MAX;
        int maxm = INT_MIN;
        
        double sum = 0.0;
        
        for(auto a:salary)
        {
            minm = min(a,minm);
            maxm = max(a,maxm);
            sum+=a;
        }
       
        sum = sum-(minm+maxm);
        
        return sum/(salary.size()-2);
        
        
        
    }
};