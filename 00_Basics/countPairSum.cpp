// Given a value x. The problem is to count all pairs from both arrays whose sum equals x.
class Solution {
  public:
    int countPairs(vector<int>& arr1, vector<int>& arr2, int x) {
        int n = arr1.size();
        int m = arr2.size();

        int l = 0;
        int r = m - 1;
        int cnt = 0;

        while (l < n && r >= 0) {
            int sum = arr1[l] + arr2[r];

            if (sum == x) {
                int a = arr1[l];
                int b = arr2[r];
            // The pair has an element from each array.
                int c1 = 0, c2 = 0;

                while (l < n && arr1[l] == a) {
                    c1++;
                    l++;
                }

                while (r >= 0 && arr2[r] == b) {
                    c2++;
                    r--;
                }

                cnt += c1 * c2;
            }
            else if (sum < x) {
                l++;
            }
            else {
                r--;
            }
        }
        return cnt;
    }
};
