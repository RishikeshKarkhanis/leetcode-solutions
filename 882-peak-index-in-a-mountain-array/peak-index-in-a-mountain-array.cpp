class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0, e = arr.size() - 1;

        while (s < e) {
            int m = s + (e - s) / 2;

            if (arr[m] < arr[m + 1]) {
                // rising slope
                s = m + 1;
            } 

            else {
                // falling slope
                e = m;
            }
        }

        return s; // or e (both same)
    }
};