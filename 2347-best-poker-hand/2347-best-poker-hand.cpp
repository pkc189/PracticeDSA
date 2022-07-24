class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        
        unordered_map<int,int>mr;
        unordered_map<char,int>ms;
        
        for(auto a:ranks)
        {
            mr[a]++;
        }
        
         for(auto a:suits)
        {
            ms[a]++;
        }
        
        
       for(auto a:ms)
       {
           if(a.second>=5)
               return "Flush";
       }
        
          
       for(auto a:mr)
       {
           if(a.second>=3)
               return "Three of a Kind";
       }
        
          
       for(auto a:mr)
       {
           if(a.second>=2)
               return "Pair";
       }
        
        
       return "High Card"; 
    }
};