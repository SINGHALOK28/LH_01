class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char,int>mp;
      int low=0,high=0,res=0;
      for(high=0;high<s.size();high++)
      {
        mp[s[high]]++;
        int k = high-low+1;
        while(mp.size()<k)
        {
            mp[s[low]]--;
            if(mp[s[low]]==0)
            mp.erase(s[low]);
            low++;
            k= high-low+1;
        }
        res = max(res,high-low+1);
      }return res;
    }
};



