class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int start=0;
        int end=arr.size()-1;
        int mid=(start+end)/2;
        
        while(start<=end){
            int mid=(start+end)/2;
            if(k==arr[mid]){
                return true;
            }
            else if(k<arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            
        }
    return false;
    }
};