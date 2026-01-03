class Solution {
public:
    int minProduct(vector<int>& arr, int k) {
        const long long MOD = 1000000007;
        long long res = 1;

        sort(arr.begin(), arr.end());

        if(k > arr.size()) k = arr.size();  // safe

        for(int i = 0; i < k; i++) {
            res = (res * (arr[i] % MOD)) % MOD;  // safe multiplication
        }

        return (int)res;  // GFG expects int
    }
};
