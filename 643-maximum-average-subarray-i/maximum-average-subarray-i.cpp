
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l = 0;
        int h = k - 1;

        double sum = 0;
        double result = -DBL_MAX;

        for (int i = l; i <= h; i++) {
            sum += nums[i];
        }

        result = sum / k;

        while (h < nums.size() - 1) {
            h++;
            l++;

            sum += nums[h];
            sum -= nums[l - 1];

            double avg = sum / k;
            result = max(result, avg);
        }

        return result;
    }
};
