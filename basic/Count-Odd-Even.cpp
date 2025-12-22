#include<stdlib.h>
#include<vector>
using namespace std;
class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        int even = 0, odd = 0;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }

        return {odd, even};   
    }
};
