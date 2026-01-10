
class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        l=l-1; //1 based indexing
        r=r-1; //1 based indexing
        while(l<r){
            int temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            l++;
            r--;
        }
        return arr;
    }
};