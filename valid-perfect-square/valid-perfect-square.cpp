class Solution {
public:
    bool isPerfectSquare(int num) {
        int tmp = 1;
        while (num / tmp > tmp) 
            tmp++;
        return (num % tmp == 0 && num / tmp == tmp);
    }
};