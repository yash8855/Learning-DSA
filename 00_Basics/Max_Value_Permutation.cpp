class Solution {
  public:
    int maxValue(vector<int> &arr) {
        sort(arr.begin(),arr.end());

        long long MOD=1000000007;
        long long sum=0;

        for(int i=0; i<arr.size();i++){
            sum=sum+1LL*arr[i]*i;
        }
    return sum%MOD;
    }
};