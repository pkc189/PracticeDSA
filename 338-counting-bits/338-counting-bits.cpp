class Solution
{
    public:
        vector<int> countBits(int n)
        {
            vector<int> v;

            for (int p = 0; p <= n; p++)
            {
                int count = 0;
                int i=p;
                while (i)
                {
                    count = count + (i & 1);
                    i >>= 1;
                }

                v.push_back(count);
            }

            return v;
        }
};