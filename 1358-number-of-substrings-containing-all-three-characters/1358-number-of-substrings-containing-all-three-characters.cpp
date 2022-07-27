class Solution {
public:
     int numberOfSubstrings(string s) {
        int count[3] = {0, 0, 0};int i=0,res=0;
        for (int j = 0; j < s.size(); ++j) {
            ++count[s[j] - 'a'];
            while (count[0] && count[1] && count[2]&&i<=j)
               {
               
                --count[s[i++] - 'a'];
            res+=(s.length()-j);
            }
          
           
        }
        return res;
    }
};