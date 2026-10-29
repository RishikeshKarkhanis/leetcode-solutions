class Solution {
public:

    int prefixSum(vector<int>&nums, int idx) {
        int sum = 0;
        for(int i = 0; i < idx; i++) {
            sum += nums[i];
        }
        return sum;
    }

    int suffixSum(vector<int>&nums, int idx) {
        int sum = 0;
        for(int i = nums.size()-1; i > idx; i--) {
            sum += nums[i];
        }
        return sum;
    }

    int pivotIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            int p = prefixSum(nums, i);
            int s = suffixSum(nums, i);
            if(p == s) return i;
        }
        return -1;
    }
};