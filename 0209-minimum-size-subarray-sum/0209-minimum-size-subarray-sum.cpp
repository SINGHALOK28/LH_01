class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen=INT_MAX;
        int cursum=0;
        int left=0;

        for(int right=0;right<nums.size();right++)
        {
            cursum+=nums[right];
            while(cursum>=target)
            {
                if(right-left+1<minlen)
                {
                    minlen=right-left+1;
                }
                cursum-=nums[left];
                left++;
            }
        }
        return minlen==INT_MAX?0:minlen;
    }
};