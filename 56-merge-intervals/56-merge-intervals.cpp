bool static cmp(vector<int> a, vector<int> b)
{
    return a[0] < b[0];
}

// 1,3.  2,9

class Solution
{
    public:

        vector<vector < int>> merge(vector<vector < int>> &intv)
        {
            sort(intv.begin(), intv.end(), cmp);
            vector<vector < int>> v;

            v.push_back(intv[0]);

            for (int i = 1; i < intv.size(); i++)
            {
                auto a = v.back();
                auto b = intv[i];

                if (b[0] > a[1])
                    v.push_back(b);
                else
                    v.back()[1] = max(v.back()[1], b[1]);
            }

            return v;
        }
};