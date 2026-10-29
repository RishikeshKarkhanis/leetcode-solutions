
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap;
        hashmap[0] = 1;

        int prefixSum = 0;
        int res = 0;

        for (int num : nums) {
            prefixSum += num;

            res += hashmap[prefixSum - k];

            hashmap[prefixSum]++;
        }

        return res;
    }
};
