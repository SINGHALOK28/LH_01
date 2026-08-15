// class Solution {
// public:

// int solve(vector<int>&dp,vector<int>cost,int i){
//     if(i>=cost.size()) return 0;
//     if(dp[i]!=-1) return dp[i];
//     int a=solve(dp,cost,i+1)+cost[i];
//     int b=solve(dp,cost,i+2)+cost[i];

//     return dp[i]=min(a,b);
// }
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n=cost.size();
//         vector<int>dp(n+1,-1);
//         return min(solve(dp,cost,0),solve(dp,cost,1));
//     }
// };

//  TABULATION  
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
         dp[0]=cost[0];
    dp[1]=cost[1];

    for(int i=2;i<cost.size();i++){
        dp[i]=cost[i]+ min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
       
    }
};