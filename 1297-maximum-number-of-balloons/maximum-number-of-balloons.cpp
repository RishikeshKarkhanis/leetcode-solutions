class Solution {
public:
    int maxNumberOfBalloons(string text) {

        unordered_map<char, int> um;
        for(char c : text) {
            um[c]++;
        }

        bool doable = true;
        string s = "balloon";
        int count = 0;

        while(doable) {
            for(char c : s) {
                if(um[c] > 0) {
                    um[c]--;
                }
                else {
                    doable = false;
                    break;
                }
            }
            count++;
        }

        return count-1;

    }
};