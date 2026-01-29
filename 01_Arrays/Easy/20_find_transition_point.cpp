class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        if(arr[0]==1){
            return 0;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                return i;
            }
        }
    return -1;
    }
};
// Time Complexity: O(n)



class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        int ans=-1;
        if(arr[0]==1){
            return 0;
        }
        while(start<=end){
            int mid =start+ (end-start)/2;
            if(arr[mid]==1){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    return ans;
    }
};
// Time Complexity: O(log n)