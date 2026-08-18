class Solution {
public:
    int solve(vector<int>& cost, vector<int>& time, int i, int n, vector<vector<int>>& dp){
        if(n <= 0){
            return 0;
        }
        if(i >= cost.size()){
            return 1e9;   
        }
        if(dp[i][n] != -1){
            return dp[i][n];
        }
        else {
            int notTake = solve(cost, time, i+1, n,dp);
            int take = cost[i] + solve(cost, time, i+1, n -  time[i] -1,dp); 
            return dp[i][n] = min(notTake, take);      
        }
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        vector<vector<int>>dp(cost.size()+1,vector<int>(time.size()+1,-1));
        return solve(cost,time,0,time.size(),dp);
    }
};