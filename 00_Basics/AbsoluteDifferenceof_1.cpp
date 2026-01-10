class Solution {
  public:
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr[i]<k){
                if(arr[i]>=10){
                    int temp=arr[i];
                    int prevDigit=temp%10;
                    temp=temp/10;
                    bool  vaildNumber=true;
                    while(temp>0){
                        int currDigit=temp%10;
                        if(abs(currDigit-prevDigit)!=1){
                            vaildNumber=false;
                            break;
                        }
                        prevDigit=currDigit;
                        temp=temp/10;
                    }
                    if(vaildNumber){
                        ans.push_back(arr[i]);
                    }
                }
            }
        }
    return ans;
    }
};
