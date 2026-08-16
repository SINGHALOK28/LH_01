class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size(); // children
        int m=s.size(); // cookies
        int child=0;
        int biscuit=0;
        int count=0;
        while(child < n && biscuit < m){
            if(s[biscuit]>=g[child]){
                // Cookie satisfy child? if yes run if block
                count++;
                child++;
                biscuit++;
            }
            else{
                // Cookie is too small
                biscuit++;
            }
        }
    return count;
    }
};