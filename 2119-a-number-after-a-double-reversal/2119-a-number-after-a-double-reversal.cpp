class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev = 0, rev1 = 0;
        int y = num;
        while (y > 0) {
            int digit = y % 10;
            rev = rev * 10 + digit;
            y /= 10;
        }
        int temp = rev;
        while (temp > 0) {
            int digit = temp % 10;
            rev1 = rev1 * 10 + digit;
            temp /= 10;
        }

        return num == rev1;
    }
};