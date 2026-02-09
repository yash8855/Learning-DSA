class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return i + 1;   // rotation point found
            }
        }

        // array already sorted (no rotation)
        return 0;
    }
}; 
