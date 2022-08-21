typedef pair<int,int> p;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        
        for(auto a:nums)
        {
            map[a]++;
        }
        
        priority_queue<p,vector<p>,greater<p>>q;
        
        vector<int>v;
        
        for(auto a:map)
        {
            q.push({a.second,a.first});
            
            if(q.size()>k)
                q.pop();
            
        }
        
      while(!q.empty())
      {
          auto a = q.top();
          v.push_back(a.second);
          q.pop();
      }
        
        
        return v;
        
    }
};