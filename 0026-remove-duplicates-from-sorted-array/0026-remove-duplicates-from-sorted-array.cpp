class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int officer=0;
      int cm=1,res=1;
      int n=nums.size();
      while(cm<n)
      {
        if(nums[cm]!=nums[cm-1])
        {
            officer++;
            nums[officer]=nums[cm];
            res++;
        }
        cm++;
      }
    return res;
    }
};