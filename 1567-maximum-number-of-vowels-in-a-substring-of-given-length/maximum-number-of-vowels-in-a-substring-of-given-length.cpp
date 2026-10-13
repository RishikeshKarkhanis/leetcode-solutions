class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;

        // Count vowels in the first window
        for (int i = 0; i < k; i++) {
            char c = s[i];

            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u') {
                count++;
            }
        }

        int maxCount = count;

        // Slide the window
        for (int i = k; i < s.length(); i++) {
            char incoming = s[i];
            char outgoing = s[i - k];

            if (incoming == 'a' || incoming == 'e' ||
                incoming == 'i' || incoming == 'o' ||
                incoming == 'u') {
                count++;
            }

            if (outgoing == 'a' || outgoing == 'e' ||
                outgoing == 'i' || outgoing == 'o' ||
                outgoing == 'u') {
                count--;
            }

            maxCount = max(maxCount, count);

            // Optimization: maximum possible is k
            if (maxCount == k) {
                return k;
            }
        }

        return maxCount;
    }
};
