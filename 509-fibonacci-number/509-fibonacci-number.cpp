class Solution {
  public:
    int fib(int n) {

      if (n == 0 || n == 1)
        return n;

      int prevOne = 0;
      int prevTwo = 1;
      int curr = 0;

      for (int i = 1; i < n; i++) {
        curr = prevOne + prevTwo;
        prevOne = prevTwo;
        prevTwo = curr;

      }

      return curr;
    }
};