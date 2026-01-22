class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        unordered_map<int,int> mp;
        int n = arr.size();

        for(int i = 0; i < n; i++){
            mp[arr[i]]++;
        }

        vector<int> res;
        for(int i = 1; i <= n; i++){
            res.push_back(mp[i]);  // default 0 if not present
        }

        return res;
    }
};
