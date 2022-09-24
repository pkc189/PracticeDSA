class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int x =0,y=0;
        
       vector<int>v;
        for(int i=0;i<gas.size();i++ )
        { x+=gas[i];
          y+=cost[i];
            v.push_back(gas[i]-cost[i]);
        }
        
        if(x<y)
            return -1;
        
       int sum=0,c=0;
       
        for(int i=0;i<v.size();i++)
        {  
            sum+=v[i];
            
            if(sum<0)
            {
                sum=0;
                c=i+1;
            }
             
            
        }
        
        return c;
        
        
    }
};