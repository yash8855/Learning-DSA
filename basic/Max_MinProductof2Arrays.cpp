 // Function to find the maximum element from array a[] and
    // the minimum element from array b[] and return their product.
class Solution {
  public:
    long long find_multiplication(vector<int> &arr1, vector<int> &arr2) {
        int max=arr1[0];
        int min=arr2[0];
        for(int i=1;i<arr1.size();i++){
            if(max<arr1[i]){
                max=arr1[i];
            }
        }
        for(int i=1;i<arr2.size();i++){
            if(min>arr2[i]){
                min=arr2[i];
            }
        }
    return min*max;
    }
};