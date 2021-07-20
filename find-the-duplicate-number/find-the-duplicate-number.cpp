class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(v.back()==nums[i])
                return nums[i];
            
            v.push_back(nums[i]);
        }
        return -1;
    }
};