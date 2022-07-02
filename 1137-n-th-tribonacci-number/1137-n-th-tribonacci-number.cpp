class Solution {
public:
    int tribonacci(int n) {
        
        if(n>=1 && n<3)
            return 1;
        if(n==0)
            return 0;
        
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
        
        
      return curr;  
    }
};