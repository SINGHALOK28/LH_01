class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num : nums){
            freq[num]++;
        }
        int pairs=0;
        int left=0;
        for(auto ele : freq){
            pairs+=ele.second / 2;
            left+=ele.second % 2;
        }
        return {pairs,left};

    }
};