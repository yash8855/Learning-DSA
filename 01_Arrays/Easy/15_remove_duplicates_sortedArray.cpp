class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        set<int> s(arr.begin(), arr.end());
        vector<int> res(s.begin(), s.end());
        return res;
    }
};