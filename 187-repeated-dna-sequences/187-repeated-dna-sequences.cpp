class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
      vector<string>v;
        
        unordered_map<string,int>map;
        
        for(int i=0;i<s.size();i++)
        {
           string k =  s.substr(i,10);
            
            map[k]++;
            
        }
        
        
        for(auto a:map)
        {
            if(a.second>1)
                v.push_back(a.first);
        }
        
        return v;
    }
};