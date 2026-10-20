class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, e = arr.size()-2;

        while(st<=e){
            int mid = st + (e-st)/2;
            if( arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
            if(arr[mid] > arr[mid+1]) e = mid -1;
            else st = mid+1;
        }
        return -1;
    }
};