
class Solution {
public:
    int longestPalindrome(string s) {

        int count = 0;
        bool oddFound = false;

        unordered_map<char, int> um;

        for(char c : s) {
            um[c]++;
        }

        for(auto i : um) {
            if(i.second % 2 == 0) {
                count += i.second;
            }
            else {
                count += i.second - 1;
                oddFound = true;
            }
        }

        return count + (oddFound ? 1 : 0);
    }
};
