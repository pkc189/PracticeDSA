class Solution {
public:
    bool isHappy(int n) {
        
        if(n==1) return true;
        
        unordered_map<int,bool>vis;
        
        int sum=0;
        while(n!=1)
        { 
            if(vis[n])
                return false;
            else vis[n]=true;
            
            sum=0;
            while(n)
            {sum+=pow(n%10,2);
            n=n/10;}
            
           if(sum==1)
               return true;
            else n=sum;
            
        }
        return false;
    }
};