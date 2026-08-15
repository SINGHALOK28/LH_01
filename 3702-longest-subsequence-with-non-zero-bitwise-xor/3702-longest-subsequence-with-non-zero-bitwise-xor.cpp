class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        bool nonzero=false;

        for(int& num:nums){
            nonzero |=num>0;
            total ^=num;
        }
        if(total !=0) return n;
        
        if(nonzero) return n-1;

        return 0;

    }
};