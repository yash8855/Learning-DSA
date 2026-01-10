// check array is palindromic 
class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        for(int i=0; i<arr.size();i++)
        {
            int  value=arr[i];
              int rev=0;
            while(value>0)
            {
                int digit=value%10;
                rev=rev*10+digit;
                value=value/10;
            }
            if(arr[i]!=){
                return false;
            }
        
        }
    return true;   
    }
};