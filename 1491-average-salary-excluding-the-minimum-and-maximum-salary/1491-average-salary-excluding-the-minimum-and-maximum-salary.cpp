class Solution {
public:
    double average(vector<int>& salary) {
        int min = *min_element(salary.begin(),salary.end());
        int max = *max_element(salary.begin(),salary.end());
        
        double sum = accumulate(salary.begin(),salary.end(),0);
        
        
        sum = sum-(min+max);
        
        return sum/(salary.size()-2);
        
        
        
    }
};