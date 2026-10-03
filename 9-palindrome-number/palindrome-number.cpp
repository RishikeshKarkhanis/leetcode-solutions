class Solution {
public:
    bool isPalindrome(int x) {
        int copy = x;

        long int rev = 0;

        while(x>0) {
            int rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }

        if(rev == copy) return 1;
        else return 0;
    }
};