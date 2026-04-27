class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        vector<int> pre(n);
        vector<int> suf(n);
        pre[0]=1;
        suf[n-1]=1;

        for(int i=1,j=n-2;i<n,j>=0;i++,j--)
        {
            pre[i] = pre[i-1]*nums[i-1];
            suf[j] = suf[j+1]*nums[j+1];
        }

        for(int i=0;i<n;i++)
        {res[i] = pre[i]*suf[i];}
        return res;
    }
};