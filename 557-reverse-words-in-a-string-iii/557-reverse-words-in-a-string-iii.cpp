class Solution {
public:
    string reverseWords(string s) {
        
        string res,str;
        
        for(auto a:s)
        {
            if(a==' ')
            {
              reverse(str.begin(),str.end());
              res+=str+" ";
                str="";
                
                
            }
            else{
                str+=a;
            }
        }
          reverse(str.begin(),str.end());
        res+=str;
        return res;
    }
};