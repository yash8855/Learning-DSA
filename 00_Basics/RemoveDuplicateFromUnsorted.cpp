// "Remove duplicates BUT preserve the original order of elements"
class Solution{
    public:
    vector<int> removeDuplicate(vector<int>& arr){
        unordered_set<int> seen;
        vector<int> res;
        for(auto x:arr){
            if(seen.find(x)==seen.end()){
                res.push_back(x);
                seen.insert(x);
            }
        }
        return res;
    }
};