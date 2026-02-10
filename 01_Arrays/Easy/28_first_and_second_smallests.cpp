class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int n = arr.size();
        vector<int> res;
        
        if (n < 2) {
            res.push_back(-1);
            return res;
        }
        
        int first = INT_MAX;
        int second = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] < first) {
                second = first;
                first = arr[i];
            }
            else if (arr[i] > first && arr[i] < second) {
                second = arr[i];
            }
        }
        
        if (second == INT_MAX) {
            res.push_back(-1);
        } else {
            res.push_back(first);
            res.push_back(second);
        }
        
        return res;
    }
};
