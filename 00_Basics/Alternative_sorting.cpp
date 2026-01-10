class Solution
{
public:
    vector<int> AlternateSort(vector<int> &arr)
    {
        vector<int> res;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int left = 0;
        int right = n - 1;
        while (left < right)
        {
            res.push_back(arr[right]);
            res.push_back(arr[left]);
            right--;
            left++;
        }
        if (left == right)
        {
            res.push_back(arr[left]);
        }
        return res;
    }
};