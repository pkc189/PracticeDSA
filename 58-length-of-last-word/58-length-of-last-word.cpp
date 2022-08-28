class Solution {
public:
    int lengthOfLastWord(string s) {
      
        
        
        
        int n = s.size()-1;
        int count=0;
        int flag=1;
        for(int i=n;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                flag=2;
                count++;
            }
            else{
               if(flag==2)
                   break;
            }
        }
        
       return count; 
    }
};