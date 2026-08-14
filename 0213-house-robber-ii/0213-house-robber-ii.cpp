class Solution {
public:
int solve(vector<int>&dp,vector<int> nums,int i,int n){
    if(i>n) return 0;
    if(dp[i]!=-1)
    {
        return dp[i];
    }

    int use=nums[i]+solve(dp,nums,i+2,n);
    int notuse=solve(dp,nums,i+1,n);
    dp[i]=max(use,notuse);
    return dp[i];
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        vector<int>dp1(n,-1);
        int a=solve(dp1,nums,0,n-2);
        vector<int>dp2(n,-1);
        int b=solve(dp2,nums,1,n -1);
        return max(a,b);
    }
};