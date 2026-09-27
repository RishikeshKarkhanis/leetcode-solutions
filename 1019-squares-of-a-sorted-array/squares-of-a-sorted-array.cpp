class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> n;
        vector<int> p;

        // Split negative and positive numbers
        for(int i : nums) {
            if(i < 0)
                n.push_back(i);
            else
                p.push_back(i);
        }

        // Square them
        for(int &i : p)
            i = i * i;

        for(int &i : n)
            i = i * i;

        // Negative squares are currently in descending order
        // Reverse them to make them ascending
        reverse(n.begin(), n.end());

        // Merge n and p
        vector<int> ans;

        int i = 0;
        int j = 0;

        while(i < n.size() && j < p.size()) {
            if(n[i] <= p[j]) {
                ans.push_back(n[i]);
                i++;
            }
            else {
                ans.push_back(p[j]);
                j++;
            }
        }

        // Remaining elements from n
        while(i < n.size()) {
            ans.push_back(n[i]);
            i++;
        }

        // Remaining elements from p
        while(j < p.size()) {
            ans.push_back(p[j]);
            j++;
        }

        return ans;
    }
};