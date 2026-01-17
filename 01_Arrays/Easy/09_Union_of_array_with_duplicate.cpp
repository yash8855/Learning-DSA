class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> s;
        
        for(int x:a){
            s.insert(x);
        }
        
        for(int x:b){
            s.insert(x);
        }
        
        vector<int> result;
        for(int x:s){
            result.push_back(x);
        }
    return result;
    }
};