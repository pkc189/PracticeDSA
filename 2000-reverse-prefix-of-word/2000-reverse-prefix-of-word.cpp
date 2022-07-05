class Solution {
  public:
    string reversePrefix(string word, char ch) {
      bool flag = false;
      int j = 0, i = 0;

      for (auto a: word) {
        j++;
        if (a == ch) {
          flag = true;
          break;
        }
      }
     
      if (flag)
        while (i < (j / 2)) {
          swap(word[i], word[j - 1 - i]);
          i++;
        }

      return word;

    }
};