class Solution {
  public:
    bool twoSum(vector<int>& arr, int target){
        int start=0;
        int end=arr.size()-1;
        sort(arr.begin(),arr.end());
        while(start<end){
            int sum=arr[start]+arr[end];
            if(sum==target){
                return true;
            }
            else if(sum>target){
                end--;
            }else{
                start++;
            }
        }
    return false;    
    }
};