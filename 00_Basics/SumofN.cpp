class Solution {
  public:
    int findSum(int n) {
       int sum=0;
       for(int i=0; i<=n;i++){
           sum=sum+i;
       }
        return sum;
    }
};
