class Solution {
public:
    int countOdds(int low, int high) {
        int count=0;
        
         if(!(low&1))
             if(!(high&1))
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