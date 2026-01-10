class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        int n=arr.size();
        vector<int> vec;
        for(int i=n-1; i>=0;i--){
            vec.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]!=vec[i]){
                return false;
            }
        }
        return true;
        
    }
};
