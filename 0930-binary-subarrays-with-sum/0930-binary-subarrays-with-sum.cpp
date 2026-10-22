class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
       int i=0, j=0;
       int result=0;
       int window_sum=0 , count_zeros=0;

    while(j<nums.size()){
            window_sum += nums[j];

        while(i<j && (nums[i]==0 || window_sum>k)){
            if(nums[i]==0)
                count_zeros +=1;
            else 
                count_zeros = 0;

            window_sum -= nums[i];
            i++;
        }
        if(window_sum == k ){
            result += 1 + count_zeros;
        }
        j++;
       }
        return result; 
    }
};