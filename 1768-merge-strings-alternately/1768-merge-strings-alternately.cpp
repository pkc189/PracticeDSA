class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size1 = word1.size();
        int size2 = word2.size();
        
        int n = min(size1,size2);
        
        string res = "";
        int i=0;
       for( i=0;i<n;i++)
       {
           
          res+=word1[i]; 
            
               res+=word2[i];
           
           
       }
         
        
        if(size1<size2)
        {
            res+=word2.substr(i,max(size1,size2));
        }
        else{
             res+=word1.substr(i,max(size1,size2));
        }
        
        return res;
        
    }
};