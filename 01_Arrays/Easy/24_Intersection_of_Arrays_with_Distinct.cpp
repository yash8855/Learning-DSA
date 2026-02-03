class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        set<int> s;
        
        for(int i = 0; i < a.size(); i++) {
            s.insert(a[i]);
        }
        
        int count = 0;
        
        for(int i = 0; i < b.size(); i++) {
            if(s.count(b[i])) {
                count++;
                s.erase(b[i]); // avoid repeat
            }
        }
        
        return count;
    }
};
