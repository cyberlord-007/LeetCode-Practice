class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0,hi=(int)nums.size()-1;
        int m;
        while(lo <= hi) {
            m = lo + (hi-lo) / 2;
            if(nums[m] == target)
                return m;
            else if(nums[m] > target)
                hi = m-1;
            else
                lo = m+1;
        }
        return -1;
    }
};