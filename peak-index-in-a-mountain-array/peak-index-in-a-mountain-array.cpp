class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i;
        for (i = 1; i < arr.size(); i++)
        {
            if (arr[i] > arr[i - 1])
                continue;
            else
                break;
        }
        return i - 1;
    }
};