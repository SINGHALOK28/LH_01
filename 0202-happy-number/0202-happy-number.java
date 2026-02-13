class Solution {
    public boolean isHappy(int n) {
        int slow = square(n);
        int fast = square(square(n));
        if(slow==1) return true;
        while(slow!=fast)
        {
            slow = square(slow);
            fast = square(square(fast));
            if(slow==1 || fast==1)
            {
                return true;
            }
        }
    return false;
    }

        public int square(int num)
        {
            int ans=0;
            while(num>0)
            {
                int x = num%10;
                ans += x*x;
                num = num/10;
            }
        return ans;
        }

};