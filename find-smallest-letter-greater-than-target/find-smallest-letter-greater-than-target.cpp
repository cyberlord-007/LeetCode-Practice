class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int len = letters.size();
        int lo = 0;
        int hi = len - 1;
        char res = letters[lo];
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (letters[mid] > target)
            {
                res = letters[mid];
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return res;
    }
};