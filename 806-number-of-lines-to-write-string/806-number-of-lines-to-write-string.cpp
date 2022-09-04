class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
      vector<int>v;
        int count=1,sum=0;
        for(auto a:s)
        {
           
            
            if(sum+widths[a-'a']>100)
            {
                count++;
                sum=0;
            }
            sum+=widths[a-'a'];
        }
        
//         if(sum>=100)
//             {
//                 count++;
               
//             }
        
        v.push_back(count);
         v.push_back(sum);
        return v;
    }
};