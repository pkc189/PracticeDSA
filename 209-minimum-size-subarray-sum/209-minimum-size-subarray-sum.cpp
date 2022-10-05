class Solution
{
    public:
        int minSubArrayLen(int target, vector<int> &nums)
        {

            int length = 0;

            int left = 0;
            int right = 0;
            int maxm = INT_MAX, sum = 0;

            while (right < nums.size())
            {

                sum += nums[right];
                right++;

                while (sum >= target)
                {
                    sum -= nums[left];
                    maxm = min(maxm, right - left);
                    left++;
                }
            }

            return maxm == INT_MAX ? 0 : maxm;
        }
};