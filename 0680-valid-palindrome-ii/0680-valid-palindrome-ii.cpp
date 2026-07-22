class Solution {
public:
    bool check(int i,int j, string s){
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;

            while(i<j){
                if(s[i]!=s[j])
                {
                    return check(i+1,j,s) || check(i,j-1,s);
                }else{
                    i++;
                    j--;
                }
            }
        return true;
    }
};