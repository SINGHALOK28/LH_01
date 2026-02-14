class Solution:
    def maximumSubarraySum(self, nums, k):
        s = set()
        currSum = 0
        maxSum = 0
        left = 0

        for right in range(len(nums)):
            while len(s) == k or nums[right] in s:
                s.remove(nums[left])
                currSum -= nums[left]
                left += 1

            currSum += nums[right]
            s.add(nums[right])

            if len(s) == k:
                maxSum = max(maxSum, currSum)

        return maxSum