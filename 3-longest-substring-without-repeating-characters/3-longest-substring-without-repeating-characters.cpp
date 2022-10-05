class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            unordered_map<char, int> map;

            int i = 0;
            int j = 0;

            int maxm = 0;

        

            while (j<s.size())
            {
 
                
                if(map[s[j]]==0)
                {
                 
                    map[s[j]]=1;
                      j++; 
                }
                else
                {
                    map[s[i]]=0;
                    i++;
                }
                
                maxm = max(maxm,j-i);
            }

            return maxm;
        }
};