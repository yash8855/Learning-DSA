class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        unordered_set<int> s;
        int ans = -1;

        for (int i = arr.size() - 1; i >= 0; i--) {
            if (s.find(arr[i]) != s.end()) {
                ans = i + 1;   // 1-based indexing
            } else {
                s.insert(arr[i]);
            }
        }
        return ans;
    }
};