class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>v;
        int ones = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == 1) {
                ones++;
            }
            else {
                v.push_back(ones);
                ones = 0;
            }
        }
        v.push_back(ones);
        sort(v.begin(),v.end());
        return v.back();
    }
};