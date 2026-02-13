class Solution {
    public int calcSq(int x) {
        int sq = 0;

        while (x != 0) {
            int rem = x % 10;
            sq = sq + (rem * rem);
            x = x / 10;
        }
        return sq;
    }

    boolean isHappy(int n) {
        int slow = n;
        int fast = n;

        slow = calcSq(n);
        fast = calcSq(calcSq(n));
        while (slow != fast)
        {

            slow = calcSq(slow);
            fast = calcSq(calcSq(fast));

        }
        return slow == 1;
}
}