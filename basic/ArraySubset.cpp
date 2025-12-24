class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        for (int i = 0; i < b.size(); i++) {
            bool found = false;

            for (int j = 0; j < a.size(); j++) {
                if (b[i] == a[j]) {
                    found = true;
                    break;
                }
            }

            // if current element of b not found in a
            if (found == false) {
                return false;
            }
        }
        return true;
    }
};
