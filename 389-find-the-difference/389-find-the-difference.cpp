class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char c=0;
        
        for(auto a:t)
            c=c^a;
        
         for(auto a:s)
            c=c^a;
        
        return c;
    }
};