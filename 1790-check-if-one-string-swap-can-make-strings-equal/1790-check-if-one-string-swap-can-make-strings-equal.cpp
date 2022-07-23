class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int max = 0;
        
     unordered_map<char,int>map;
        
        for(auto a:s2)
            map[a]++;
             for(auto a:s1)
            map[a]--;
        
        
        int i=0;
        while(i<s2.size())
        {
         
            
            if(s1[i]!=s2[i])
            {
                
                max++;
            }
            
            i++;
        }
        
        
        
        for(auto a:map)
        {
            if(a.second<0)
                return false;
        }
        
        
        
        if(max<=2)
            return true;
        
        return false;
        
    }
};