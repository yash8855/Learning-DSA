
class Solution {
  public:
    string longest(vector<string>& arr) {
        string str=arr[0];
        for(int i=0 ; i<arr.length(); i++){
            if(arr[i].length()>str.length()){
                str=arr[i];
            }
        }
    return str;
    }
};
