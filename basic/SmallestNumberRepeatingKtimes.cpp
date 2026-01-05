class Solution{
    public:
    int findDuplicate(const vector<int>& arr, int k){
        int min=INT_MAX;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.second==k){
                if(min>it.first){
                    min=it.first;
                }
            }
        }
        if(min==INT_MAX){
            return -1;
        }
    return min;
    }
};