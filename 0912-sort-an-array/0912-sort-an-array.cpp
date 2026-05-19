class Solution {
public:

    void merge(vector<int> &nums, int s,int mid, int e){
        int i = s;
        int j = mid+1;
        int k = 0;
        vector<int> temp(e-s+1);

        while(i<=mid && j<=e){
            if(nums[i] < nums[j]){
                temp[k++] = nums[i++];
            }
            else{
                temp[k++] = nums[j++];
            }
        }

        while(i<=mid){
            temp[k++] = nums[i++];
        }
        while(j<=e){
            temp[k++] = nums[j++];
        }

        for(k=0,i=s;i<=e;k++,i++){
            nums[i] = temp[k];
        }
    }

    void split(vector<int>& nums ,int s , int e){
            if(s >= e)  return;
            int mid = s+(e-s)/2;
            split(nums, s, mid);
            split(nums, mid+1, e);
            merge(nums, s, mid, e);
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        
        split(nums, 0, n-1);

        return nums;
    }
};