class Solution {
public:
    int maxi(vector<int>& piles) {
        int maxel = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            maxel = max(maxel, piles[i]);
        }
        return maxel;
    }

    long long totalh(vector<int>& piles, int speed) {
        long long thrs = 0;
        for (int i = 0; i < piles.size(); i++) {
            thrs += (piles[i] + speed - 1LL) / speed; // ceil(pile/speed)
        }
        return thrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxi(piles);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long thrs = totalh(piles, mid);

            if (thrs <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};