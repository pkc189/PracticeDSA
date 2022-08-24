class Solution {
public:
    int longestDecomposition(string text) {
        int count=0;
        int n = text.size();
        string l="",r="";
        for(int i=0;i<text.size();i++)
        {
            l = l + text[i];
            r = text[n-1-i] + r;
            
            if(l==r)
               { count++;l="";r="";}
            
        }
        
       return count; 
    }
};