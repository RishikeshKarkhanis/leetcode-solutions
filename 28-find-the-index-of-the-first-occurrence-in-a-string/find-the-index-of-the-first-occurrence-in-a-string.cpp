class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int l = 0, r = n - 1;
        
        while (r < haystack.size()) {
            // Fix: Use 'n' for the exact length of the needle
            if (haystack.substr(l, n) == needle) { 
                return l;
            } else {
                l++;
                r++;
            }
        }
        return -1;
    }
};
