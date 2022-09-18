class Solution
{
    public:

        vector<vector < int>> ans;

    void solve(int i, vector<int> temp, vector<int> c, int t)
    {
        if (t == 0)
        {
            ans.push_back(temp);
            return;
        }
        
        
        if(t<0)
            return;
        if(i==c.size())
            return;
        
        
        
        solve(i+1,temp,c,t);
        
        temp.push_back(c[i]);
        solve(i,temp,c,t-c[i]);
        
       temp.pop_back();
        
        
        
    }

    vector<vector < int>> combinationSum(vector<int> &c, int t)
    {

        vector<int> temp;

        solve(0, temp, c, t);

        return ans;
    }
};