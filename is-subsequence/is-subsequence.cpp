class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0, count = 0;
        int len1 = s.length();
        int len2 = t.length();

        while (i < len1 && j < len2)
        {
            if (s[i] == t[j])
            {
                i++;
                j++;
                count = count + 1;
            }
            else
            {
                j++;
            }
        }
        if (count == len1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};