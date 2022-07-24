class Solution {
public:
    char repeatedCharacter(string s) {
        
        
        unordered_map<char,int>map;
        char ans;
        for(auto a:s)
        {
            map[a]++;
            
            if(map[a]>=2)
            {ans= a;
             break;}
            
        }
        
        return ans;
        
    }
};