class Solution {
  public:
    int convertFive(int n) {
        // Edge Case
        if(n==0)
          return 5;
          
        int rev = 0;
        // Step 1: Replace 0 with 5 and reverse number
        while (n > 0) {
            int digit = n % 10;
            if (digit == 0) {
                digit = 5;
            }
            rev = rev * 10 + digit;
            n = n / 10;
        }

        // Step 2: Reverse again to get correct order
        int ans = 0;
        while (rev > 0) {
            ans = ans * 10 + (rev % 10);
            rev = rev / 10;
        }

        return ans;
    }
};
