class Solution {
  public:
    int findSum(vector<int>& arr) {
        int sum=0;
        set<int> s1(arr.begin(),arr.end());
        for(auto val:s1){
            sum+=val;
        }
    return sum;
    }
};