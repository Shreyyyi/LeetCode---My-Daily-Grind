class Solution {
public:

    bool isTrionic(vector<int>& nums) {
        int n = nums.size();

        if (n < 4) return false;

        int i = 0;

        // Strictly increasing
        while (i + 1 < n && nums[i] < nums[i + 1]) {
            i++;
        }

        int p = i;

        // p should not be first or last
        if (p == 0 || p == n - 1) return false;

        // Strictly decreasing
        while (i + 1 < n && nums[i] > nums[i + 1]) {
            i++;
        }

        int q = i;

        // q should not be same as p or last
        if (q == p || q == n - 1) return false;

        // Strictly increasing
        while (i + 1 < n && nums[i] < nums[i + 1]) {
            i++;
        }

        return i == n - 1;
    }
};