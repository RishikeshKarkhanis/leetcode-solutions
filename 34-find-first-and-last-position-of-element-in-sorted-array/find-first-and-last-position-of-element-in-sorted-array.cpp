class Solution {
public:

    int firstOccurenece(vector<int>& arr, int target) {
        int s = 0, e = arr.size()-1;
        int m = s+(e-s)/2;

        int occur = -1;

        while(s<=e) {
            int m = s+(e-s)/2;
            if(target == arr[m]) {
                occur = m;
                e = m-1;
            }

            else if(target < arr[m]) e = m-1;
            else s = m+1;
        }

        return occur;
    }

    int lastOccurenece(vector<int>& arr, int target) {
        int s = 0, e = arr.size()-1;
        int m = s+(e-s)/2;

        int occur = -1;

        while(s<=e) {
            int m = s+(e-s)/2;
            if(target == arr[m]) {
                occur = m;
                s = m+1;
            }

            else if(target < arr[m]) e = m-1;
            else s = m+1;
        }

        return occur;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        result.push_back(firstOccurenece(nums, target));
        result.push_back(lastOccurenece(nums, target));
        return result;
    }
};