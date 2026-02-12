class Solution {
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i = 0, j = 0;
        vector<int> result;
        
        while(i < a.size() && j < b.size()) {
            
            if(a[i] <= b[j]) {
                if(result.empty() || result.back() != a[i])
                    result.push_back(a[i]);
                i++;
            }
            else {
                if(result.empty() || result.back() != b[j])
                    result.push_back(b[j]);
                j++;
            }
        }
        
        // Remaining elements of a[]
        while(i < a.size()) {
            if(result.back() != a[i])
                result.push_back(a[i]);
            i++;
        }
        
        // Remaining elements of b[]
        while(j < b.size()) {
            if(result.back() != b[j])
                result.push_back(b[j]);
            j++;
        }
        
        return result;
    }
};
