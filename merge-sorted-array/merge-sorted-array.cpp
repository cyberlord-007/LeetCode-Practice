class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int>::iterator it1,it2;
        while(i<m&&j<n){
            if(nums1[i]<=nums2[j])
                nums1.push_back(nums1[i++]);
            else
                nums1.push_back(nums2[j++]);
        }
        while(i<m)
            nums1.push_back(nums1[i++]);
        while(j<n)
            nums1.push_back(nums2[j++]);   
       it1=nums1.begin();
       it2 = it1+(m+n);
       nums1.erase(it1,it2);
    }
};