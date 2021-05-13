class Solution {
public:
    bool isPerfectSquare(int num) {
       long long lo = 1;
        long long hi = (num / 2) + 1;
        while (lo <= hi)
        {
            long long mid = lo + (hi - lo) / 2;
            if (mid * mid == num)
                return true;
            if (mid * mid < num)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        return false; 
    }
};