class Solution
{
    public:
        int halveArray(vector<int> &nums)
        {

            double sum = accumulate(nums.begin(), nums.end(), 0.0);
            priority_queue<double> pq(nums.begin(), nums.end());

            double tot = 0;
            int count = 0;
            while ((sum - tot) > sum / 2)
            {

                double a = pq.top() / 2;
                pq.pop();
                tot += a;

                pq.push(a);
                count++;
            }

            return count;
        }
};