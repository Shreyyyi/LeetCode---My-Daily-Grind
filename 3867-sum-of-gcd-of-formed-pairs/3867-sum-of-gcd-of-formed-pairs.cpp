class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);

        int pMax = 0;

        for (int i = 0; i < n; i++) {
            pMax = max(pMax, nums[i]);
            prefix[i] = gcd(nums[i], pMax);
        }

        sort(prefix.begin(), prefix.end());

        long long ans = 0;

        int left = 0;
        int right = n - 1;

        while (left < right) {
            ans = ans + gcd(prefix[left], prefix[right]);

            left++;
            right--;
        }

        return ans;
    }
};