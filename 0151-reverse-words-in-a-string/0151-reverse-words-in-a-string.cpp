class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n = s.size();
        for(int i=0; i<s.size();i++)
        {
            while (i < n && s[i] == ' ')
             {
                i++;
             }
            string word="";
            while (i < n && s[i] != ' ') 
            {
                word += s[i];
                i++;
            }
            if (!word.empty()) {
                st.push(word);
            }
        }

        string ans = "";
        while (!st.empty()) {
            if (!ans.empty()) {
                ans += " "; 
            }
            ans += st.top();
            st.pop();
        }
        
        return ans;



    }
};