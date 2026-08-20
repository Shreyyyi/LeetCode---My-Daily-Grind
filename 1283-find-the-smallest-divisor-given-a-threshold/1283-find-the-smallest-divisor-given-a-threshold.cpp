class Solution {
public:

    long long thr(vector<int>& nums, int divi){
        long long thr = 0;

        for(int i=0; i<nums.size(); i++){
            thr += (nums[i] + divi - 1LL)/divi;
        }

        return thr;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long low = 1;
        long long high = *max_element(nums.begin(), nums.end());

        while(low <= high){
            long long mid = low + (high-low)/2;

            if(thr(nums, mid) <= threshold){
                high = mid - 1;
            }

            else{
                low = mid+1;
            }

        }
        return low;
    }
};