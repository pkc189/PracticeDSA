class Solution
{
    public:

        int get(vector<int> &nums)
        {
            
            if(nums.size()==1)
                return nums[0];
            
            vector<int> v;

            for (int i = 0; i < nums.size() - 1; i++)
            {
                v.push_back((nums[i] + nums[i + 1]) % 10);
            }

            return get(v);
        }

    int triangularSum(vector<int> &nums)
    {

        int x = get(nums);

        return x;
    }
};