class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int i,j,count=0;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            int sum =0;
            for(j=i;j<n;j++)
            {
                sum += nums[j];
                if(sum==k)
                count++;
            }
        }
        return count;

    }
};