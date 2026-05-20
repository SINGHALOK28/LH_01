class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(char c:s){
            mpp[c]++;
        }
        priority_queue<pair<int,char>> st;
        for(auto it:mpp) {
            st.push({it.second,it.first});
        }
        string res= "";
        while(!st.empty()){
            //auto [mpp,ch]=st.top();
            pair<int, char> p = st.top();
            int mpp=p.first;
            char ch=p.second;
            st.pop();
            res.append(mpp,ch);
        } 
        return res;
    }
};