typedef pair<int,string>p;

bool cmp(pair<int,string> a,pair<int,string> b)
{
    if(a.first==b.first)
        return a.second<b.second;
    
    return a.first>b.first;
}



class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
       unordered_map<string,int>map;
        for(auto a:words)
            map[a]++;
        
          
        vector<p> v;
          vector<string> ans;
        
        for(auto a:map)
        {
            v.push_back({a.second,a.first});
        }
        
        
        sort(v.begin(),v.end(),cmp);
        
        for(auto a:v)
        {
            ans.push_back(a.second);
            if(ans.size()==k)
                break;
        }
        
     
       return ans; 
        
    }
};