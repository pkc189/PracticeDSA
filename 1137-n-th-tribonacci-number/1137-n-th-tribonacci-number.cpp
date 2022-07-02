class Solution {
public:
    int tribonacci(int n) {
        
        if(n<2)
            return n;
      
        
        int prevOne =  0;
        int prevTwo =  1;
        int prevThree =1;
        int curr=0;
        
        for(int i=2;i<n;i++)
        {
            curr = prevOne+prevTwo+prevThree;
            
            
            prevOne=prevTwo;
            prevTwo=prevThree;
            prevThree=curr;
            
        }
        
        
      return n==2?1: curr;  
    }
};