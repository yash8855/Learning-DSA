class Solution {
public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        set<pair<int,int>> result;       // To store unique pairs in sorted order
        unordered_set<int> seen;         // To check for complement

        for(int x : arr) {
            if(seen.count(-x)) {          // If complement exists
                int a = min(x, -x);
                int b = max(x, -x);
                result.insert({a, b});
            }
            seen.insert(x);               // Add current number to set
        }

        // Convert set to vector<vector<int>>
        vector<vector<int>> res;
        for(auto &p : result) {
            res.push_back({p.first, p.second});
        }
        return res;
    }
};