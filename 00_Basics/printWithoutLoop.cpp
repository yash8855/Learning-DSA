// print 1 to N without Loop
class Solution {
  public:
    void printNos(int n){
        if(n==0){
            return ;
        }
        printNos(n-1);
        cout<<n<<" ";
    }
};  