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









    //  int left = 0;
    //     int right = nums.size() - 1;
    //     if (nums[left] <= nums[right]) {
    //         return nums[left];
    //     }

    //     while (left <= right) {
    //         int mid = left + (right - left) / 2;
    //         if (nums[mid] > nums[mid + 1]) {
    //             return nums[mid + 1];
    //         }
    //         if (nums[mid] < nums[mid - 1]) {
    //             return nums[mid];
    //         }
    //         if (nums[mid] > nums[0]) {
    //             left = mid + 1;
    //         } else {
    //             right = mid - 1;
    //         }
    //     }
        
    //     return -1;   
    }
};