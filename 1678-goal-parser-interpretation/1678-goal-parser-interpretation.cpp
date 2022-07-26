class Solution {
public:
    string interpret(string c) {
        
        if(c.size()==1)
            return c;
        
        
        string ans="";
        if(c[0]=='G')
            ans+="G";
        
        for(int i=1;i<c.size();i++)
        {
             
            
            if(c[i-1]=='('&&c[i]==')')
            {
                ans+="o";
            }
            else if(c[i-1]=='('&&c[i]=='a')
            {
                ans+="al";
            }
            if( c[i]=='G')
            {
               ans+="G"; 
            }
            
        }
       return ans; 
    }
};