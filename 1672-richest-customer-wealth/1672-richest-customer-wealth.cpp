class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        for(auto a:accounts)
        {
            sum = max(sum,accumulate(a.begin(),a.end(),0));
        }
        return sum;
    }
};