class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size(),i=0;
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            st.push(s[i]);
        }

        while(!st.empty())
        {
            char c = st.top();
            st.pop();
            s[i]=c;
            i++;
        }
        
    }
};