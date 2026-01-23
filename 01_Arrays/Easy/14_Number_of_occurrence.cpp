class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();

        // First occurrence
        int start = 0, end = n - 1, first = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                first = mid;
                end = mid - 1;
            } 
            else if (arr[mid] < target) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }

        if (first == -1) return 0;

        // Last occurrence
        start = 0;
        end = n - 1;
        int last = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                last = mid;
                start = mid + 1;
            } 
            else if (arr[mid] < target) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }

        return last - first + 1;
    }
};
