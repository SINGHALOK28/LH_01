class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        s=regex_replace(s,regex("[^a-z0-9]"),"");
        int n = s.length();

        for(int i=0;i<n/2;i++)
        {
            if(s.at(i)!=s.at(n-1-i))
            return false;
        }
        return true;
    }
};