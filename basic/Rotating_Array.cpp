// User function template for C++

class Solution
{
public:
    void leftRotate(vector<int> &arr, int d)
    {       
         int n = arr.size();
            d=d%n;
        for (int j = 0; j < d; j++)
        {
            int temp = arr[0];
            for (int i = 1; i < n; i++)
            {
                arr[i - 1] = arr[i];
            }
            arr[n-1]=temp;
        }
    }
};