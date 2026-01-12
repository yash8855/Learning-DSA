class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_set<int> seen;
        vector<int> ans;

        for (int num : arr) {
            if (seen.find(num) != seen.end()) {
                ans.push_back(num);  // duplicate mila
            } else {
                seen.insert(num);   // pehli baar mila
            }
        }
        return ans;
    }
};