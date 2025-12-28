class Solution
{
public:
    int multiply(vector<int> &arr)
    {
        int n = arr.size();
        int leftSum = 0;
        int rightSum = 0;
        int mid = n / 2;
        // Left Sub-array
        for (int i = 0; i < mid; i++)
        {
            leftSum += arr[i];
        }
        //  Right Sub array
        for (int i = mid; i < n; i++)
        {
            rightSum += arr[i];
        }
        return leftSum * rightSum;
    }
};