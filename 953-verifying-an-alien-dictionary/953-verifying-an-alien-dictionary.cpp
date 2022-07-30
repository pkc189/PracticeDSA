class Solution {
public:
   bool isAlienSorted(vector<string> words, string order) {
        int mapping[26];
       
       
        for (int i = 0; i < 26; i++)
            mapping[order[i] - 'a'] = i;
     
   
       
        for (string &w : words)
         {   for (char &c : w)
                {c = mapping[c - 'a'];}}
       
       for(auto a:words)
           cout<<a<<endl;
       
       
        return is_sorted(words.begin(), words.end());
    }
};