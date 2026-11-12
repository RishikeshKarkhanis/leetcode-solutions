class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> um;
        
        // 1. Count the frequency of each character
        for (char c : s) {
            um[c]++;
        }
        
        // 2. Iterate through the string in order to find the first unique character
        for (int i = 0; i < s.length(); i++) {
            if (um[s[i]] == 1) {
                return i; // Return the index immediately
            }
        }
        
        // 3. Return -1 if no unique character exists
        return -1;
    }
};
