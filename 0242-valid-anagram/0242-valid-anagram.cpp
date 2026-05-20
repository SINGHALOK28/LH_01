class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> mpp;
        if(s.size()!=t.size())
           return false;

        for(auto it:s)
        {
            mpp[it]++;
        }

        for(auto it:t)
        {
            mpp[it]--;
        }

        for(auto it:mpp)
        {
            if(it.second>0)
                return false;
        }

        return true;
    }
};