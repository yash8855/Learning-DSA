class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {

        int last = -1;          // last seen index of x or y
        int ans = INT_MAX;      // minimum distance

        for (int i = 0; i < arr.size(); i++) {

            // agar x ya y mila
            if (arr[i] == x || arr[i] == y) {

                // pehle koi mila tha aur dono alag hain
                if (last != -1 && arr[i] != arr[last]) {
                    ans = min(ans, i - last);
                }

                // current index ko yaad rakho
                last = i;
            }
        }

        // agar kabhi distance update hi nahi hua
        if (ans == INT_MAX)
            return -1;

        return ans;
    }
};
