class Solution {
  public:
    int moreFrequent(vector<int>& arr, int x, int y) {
        int n=arr.size();
        int xcount=0;
        int ycount=0;
        
        for(int i=0; i<n;i++){
            if(arr[i]==x){
                xcount++;
            }
            else if(arr[i]==y){
                ycount++;
            }
        }
        if(ycount>xcount){
            return y;
        }
        if(ycount<xcount){
            return x;
        }
        
     return min(x,y);
    }
};