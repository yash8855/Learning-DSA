class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int duplicate = -1, missing = -1;

        // Step 1: Find duplicate using sign marking
        for (int i = 0; i < n; i++) {
            int idx = abs(arr[i]) - 1;
            
            if (arr[idx] < 0)
                duplicate = abs(arr[i]);
            else
                arr[idx] = -arr[idx];
        }

        // Step 2: Find missing number
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                missing = i + 1;
                break;
            }
        }

        return {duplicate, missing};
    }
};
