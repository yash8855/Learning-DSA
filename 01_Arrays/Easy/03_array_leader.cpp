class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> res;
        int n=arr.size();
        int right_max=arr[n-1];
        res.push_back(right_max);
        for(int i=n-2;i>=0;i--){
            if(right_max<=arr[i]){
                right_max=arr[i];
                res.push_back(right_max);
            }
        }
        reverse(res.begin(),res.end());
    return res;  
    }
};