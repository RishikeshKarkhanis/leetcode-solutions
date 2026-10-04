class Solution {
public:
    void swap(char &x, char &y) {
        char temp = x;
        x = y;
        y = temp;
    }

    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0, right = n-1;
        while(left<right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};