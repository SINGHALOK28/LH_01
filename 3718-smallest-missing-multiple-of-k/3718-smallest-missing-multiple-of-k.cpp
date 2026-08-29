class Solution {
public:
    int missingMultiple(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for (auto &i:arr){
            mp[i]++;
        }
        for (int i=k ; i<=1000000 ; i+=k){
            if (!mp.count(i)) return i;
        }
        return -1;
    }
};