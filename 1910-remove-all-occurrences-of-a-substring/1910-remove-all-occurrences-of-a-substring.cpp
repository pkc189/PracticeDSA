class Solution {
public:
    string removeOccurrences(string s, string part) {
         int find = s.find(part);
             
        while(find!=-1)
        {
           s.erase(find,part.size());
            find = s.find(part);
       
        }
        
        
        return s;
        
        
    }
};