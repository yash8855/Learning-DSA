class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return false;

        sort(arr.begin(), arr.end());

        for (int i = n - 1; i >= 2; i--) {   // arr[i] as target
            int left = 0;
            int right = i - 1;

            while (left < right) {
                int sum = arr[left] + arr[right];

                if (sum == arr[i]) {
                    return true;
                }
                else if (sum > arr[i]) {
                    right--;
                }
                else {
                    left++;
                }
            }
        }
        return false;
    }
};
