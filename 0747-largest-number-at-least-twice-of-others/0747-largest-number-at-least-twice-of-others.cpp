class Solution {
public:
    int dominantIndex(vector<int>& nums) {
    int n = nums.size();
    int largest = nums[0];
    int secondLargest = -1;
    int j;

    for (int i = 1; i < n; i++) {
            if (nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
            j=i;
        }
        else if (nums[i] > secondLargest && nums[i] != largest) {
            secondLargest = nums[i];
        }
    }
        return (largest>=secondLargest*2)?j:-1;
    }
};