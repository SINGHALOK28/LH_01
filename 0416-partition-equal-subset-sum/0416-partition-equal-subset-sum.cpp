class Solution {
public:
bool solve(vector<int>& nums, int sum, int n){
    vector<vector<bool>> dp(n+1,vector<bool>(sum+1,false));
    for(int i=0;i<=n;i++){
            dp[i][0] = true;
        }
    for(int i=1;i<=n;i++){
            for(int target =1;target<=sum;target++){
                // SKIP kiya 
                dp[i][target] = dp[i-1][target];

                // Take
                if(nums[i-1] <= target){
                    dp[i][target] = dp[i][target] || dp[i-1][target - nums[i-1]];
                }
            }
        }return dp[n][sum];
}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for (int num : nums){
            sum +=num;
        }
        if( sum%2 !=0) return false;
            return solve(nums,sum/2,n);
    }
};