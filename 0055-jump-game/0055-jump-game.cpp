//GREEDY
// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         int dum=nums[0];
//         for(int i=1;i<nums.size();i++)
//         {
//             dum--;
//             if(dum<0)
//             {
//                 return false;
//             }
//             dum = max(dum,nums[i]);
//         }
//     return dum>=0?true:false;
//     }
// };

//2ND APPROACH 

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int finalpos=n-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]+i>=finalpos){
                finalpos=i;
            }
        }
        return finalpos==0?true:false;
    }
};