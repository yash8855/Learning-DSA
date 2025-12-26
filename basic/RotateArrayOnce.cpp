class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return;  // edge case 
        
        int temp = arr[n - 1]; // last element
        
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];  // shift right
        }
        
        arr[0] = temp;  // put last element at first
    }
};
