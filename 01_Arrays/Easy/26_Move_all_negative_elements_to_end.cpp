class Solution {
  public:
    void segregateElements(vector<int>& arr) {
    vector<int> temp; 
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp.push_back(arr[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp.push_back(arr[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
        }
    }
};