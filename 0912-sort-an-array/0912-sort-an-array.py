class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        min_val = min(nums)
        max_val = max(nums)
        freq = [0]*(max_val - min_val + 1)

        for i in nums:
            freq[i- min_val] += 1
        
        ans = []
        for i in range(len(freq)):
            while freq[i] > 0:
                ans.append(i+min_val)
                freq[i] -= 1
        return ans