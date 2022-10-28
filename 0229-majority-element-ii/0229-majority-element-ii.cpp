class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      unordered_map<int,int>map;
         vector<int>  v;
        for(auto a:nums)
            {map[a]++;
            
      
            }
        
        
        for(auto a:map)
        {
                  if(a.second>(nums.size()/3))
                v.push_back(a.first);
        }
        return v;
    }
};