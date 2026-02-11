class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        int low = 0;
        int high = arr.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // If we are in increasing part
            if (arr[mid] < arr[mid + 1]) {
                low = mid + 1;
            }
            // If we are in decreasing part
            else {
                high = mid;
            }
        }

        // low == high -> peak index
        return arr[low];
    }
};
