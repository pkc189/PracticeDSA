class Solution {
public:
    int balancedString(string s) {
        unordered_map<char,int>map;
        
        for(auto a:s)
            map[a]++;
        
        int k = s.size()/4;
        int sum=s.size();
        int i=0;
        
        for(int j=0;j<s.size();j++)
        {
            map[s[j]]--;
              while (i < s.size() && map['Q'] <= k && map['W'] <= k && map['E'] <= k && map['R'] <= k)
              {
                  sum = min(sum,j-i+1);
                  map[s[i++]]++;
              }
        }
        
        
        
        return sum;
    }
};