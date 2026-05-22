class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int store=-1;
        for (int i=n-2; i>=0;i--){
            if (nums[i]<nums[i+1]){
                store=i;
                break;
            }
        }
        if(store!=-1) {
            for(int i=n-1;i>store;i--) {
                if(nums[i]>nums[store]) {
                    swap(nums[store],nums[i]);
                    break;
                }
            }
        }
        reverse(nums.begin()+store+1, nums.end());
    }
};