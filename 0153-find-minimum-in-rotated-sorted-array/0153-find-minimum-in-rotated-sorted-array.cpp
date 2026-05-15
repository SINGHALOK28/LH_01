class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1,mid,n=nums.size();
        int res =-1;
        while(start<=end)
        {
           mid = end + (start-end)/2;
            if (nums[mid]>nums[n-1])
            {
                start = mid +1;
            }
            else {
                    res = mid;
                    end = mid-1;
            }
        }
        return nums[res];
    }
};