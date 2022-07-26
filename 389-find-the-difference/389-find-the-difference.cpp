class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.size()==0)
            return t[0];
        
    unordered_map<char,int>v;
    
        for(auto a:t)
        {
            
            v[a]++;
            
        }
        char ans=' ';
      
        for(auto a:s)
        {
           v[a]--;
        }
        for(auto a:v)
         
        {
            if(a.second==1)
                return a.first;
        }
        
       return ans;
    }
};