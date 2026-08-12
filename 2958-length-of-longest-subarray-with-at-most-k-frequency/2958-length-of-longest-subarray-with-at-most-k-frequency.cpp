class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int select=0;
        unordered_map<int,int>mp;
        for (int i = 0; i < nums.size(); i++) {
                mp[nums[i]]++;

            while(mp[nums[i]]>k){
                mp[nums[select]]--;
                select++;
            }
            maxi=max(maxi,i-select+1);
        }
        return maxi;
    }
};