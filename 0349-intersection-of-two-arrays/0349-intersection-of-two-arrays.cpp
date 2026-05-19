class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp;
        for(auto it:nums1)
        {
            mpp[it]++;
        }

        set<int>s; // for no duplicates to store
        int n= nums2.size();

        for(int i=0;i<n;i++)
        {
            if(mpp.find(nums2[i])!=mpp.end())
            {
                s.insert(nums2[i]);
            }
        }
        vector<int> ans(s.begin(),s.end());
        return ans;
    }
};