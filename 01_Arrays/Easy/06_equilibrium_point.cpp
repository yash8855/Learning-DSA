class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int total_sum=0;
        int left_sum=0;
        int right_sum=0;
        
        for(int i=0;i<arr.size();i++){
            total_sum=total_sum+arr[i];
        }
        
        for(int j=0; j<arr.size(); j++){
            
            right_sum=total_sum-left_sum-arr[j];
            
            if(right_sum==left_sum){
                return j;
            }
            left_sum=left_sum+arr[j];
        }
    return -1;
    }
};
