class Solution {
public:
    int maxel(vector<int>& piles) {
        int maxi = INT_MIN;
        for (int pile : piles) {
            maxi = max(maxi, pile);
        }
        return maxi;
    }

    long long eathours(vector<int>& piles, int speed) {
        long long thrs = 0;
        for (int pile : piles) {
            thrs += (pile + speed - 1LL) / speed;  // ceil(pile / speed)
        }
        return thrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxel(piles);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long thrs = eathours(piles, mid);

            if (thrs <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};