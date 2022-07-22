class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        
         if(low%2==0)
             if(high%2==0)
             {return (high-low)/2;}
        
        return (high-low)/2+1;
        
        
        
        // for(int i=low;i<=high;i++)
        // {
        //     if(i&1)
        //         count++;
        // }
        
        return count;
    }
};