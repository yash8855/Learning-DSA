class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int start=0;
        int end=arr.size()-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==k){
                ans=mid;      // possible answer
                end=mid-1;    //  Move left to find smaller index
            }else if(arr[mid]>k){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
    return ans; 
    }
};
