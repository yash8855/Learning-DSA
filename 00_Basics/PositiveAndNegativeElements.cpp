
class Solution {
  public:
    vector<int> arranged(vector<int>& arr) {
       int n=arr.size();
         vector<int> pos,neg;
         for(int i=0;i<n;i++){
             if(arr[i]>=0){
                 pos.push_back(arr[i]);
             }
             else{
                 neg.push_back(arr[i]);
             }
         }
         int p=0,q=0,idx=0;
         while(p<pos.size() && q<neg.size()){
                arr[idx++]=pos[p++];
                arr[idx++]=neg[q++];
            }
    return arr;
    }
};