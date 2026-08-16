class Solution {
public:
    //  **/ recursion function /** 
    //    bool solve(vector<int>& nums, int ind){  
    //     if(ind==nums.size()-1) return true;
    //     if(nums[ind]==0) return false;
    //     int x=ind+nums[ind];
    //     for(int i=ind+1;i<=x;i++){
    //         if(i<nums.size() && solve(nums,i)) return true;
    //     }

    //     return false;
    // }

    bool solve2(vector<int>& nums, int ind,vector<int>& dp){
        if(ind==nums.size()-1) return true;
        if(nums[ind]==0) return false;
        if(dp[ind]!=-1) return dp[ind];
        int x=ind+nums[ind];
        for(int i=ind+1;i<=x;i++){
            if(i<nums.size() && solve2(nums, i, dp)) 
                return dp[ind]= true;
        }
        return dp[ind]=false;
    }
    bool canJump(vector<int>& nums) {
        //return solve(nums,0); recursion
        vector<int> dp(nums.size(), -1);
        return solve2(nums, 0, dp);
    }
};