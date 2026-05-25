class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>res;
        for(auto it:nums)
        {
            mpp[it]++;
        }
        for(auto it:mpp)
        {
            if(it.second>1)
                res.push_back(it.first);
        }
        return res;
    }
};