class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> v(nums.begin(),nums.end());
        
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1)
            {
                sum+=nums[i];
            }
            else break;
        }
        while(v.find(sum)!=v.end()){
            sum++;
        }
        return sum;

    }
};