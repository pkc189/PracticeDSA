class Solution {
public:
  
   static int countOnes(int dec)
    {
        int count=0;
        while(dec)
        {
            count+= dec&1;
            
             dec =  dec>>1;
            
          
            
        }
        
        return count;
    }
    
    
     static  bool cmp(int a,int b)
        {
        int x = countOnes(a);
        int y = countOnes(b);
         
       
          if(x==y)
              return a<=b;
            return x<y;
        }
    
    
    vector<int> sortByBits(vector<int>& arr) {
      
     
        sort(arr.begin(),arr.end(),cmp);
      
       
        
        return arr;
        
        
    }
};