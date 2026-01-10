class Solution {
  public:
    int maxNtype(vector<int>& arr) {
        int n = arr.size();
        int ascBreak = 0, descBreak = 0;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1])
                ascBreak++;
            if (arr[i] < arr[i + 1])
                descBreak++;
        }

        if (ascBreak == 0)
            return 1;   // Ascending

        if (descBreak == 0)
            return 2;   // Descending
            
//Sorted array + any number of rotations ⇒exactly one break 
         if (ascBreak == 1)
            return 4;   // Ascending rotated

        return 3;       // Descending rotated
    }
};
