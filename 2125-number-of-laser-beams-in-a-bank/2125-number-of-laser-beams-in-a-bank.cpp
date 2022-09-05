class Solution {
public:
    
    int getDec(string str)
    {
        int count=0;
        for(auto a:str)
            if(a=='1')
                count++;
        
        return count;
        
    }
    
    
    int numberOfBeams(vector<string>& bank) {
        int sum = 0,   prev = 0;
 
        
        for(auto a:bank)
        { int l = getDec(a);
           if(l)
           {sum+=prev*l;
         prev = l;}
        }
        
       
        return sum;
    }
};