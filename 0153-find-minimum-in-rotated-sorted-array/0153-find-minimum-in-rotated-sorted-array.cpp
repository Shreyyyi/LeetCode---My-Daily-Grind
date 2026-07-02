class Solution {
public:
    int findMin(vector<int>& nums) {
        // int drop = 0;
        // for(int i=0; i<nums.size()-1; i++){
        //     if(nums[i]>nums[i+1]){
        //         drop++;
        //         return nums[i+1];
        //         break;
        //     }
        // }
        // return nums[0];

        // // sort(nums.begin(), nums.end());
        // // return nums[0];

        int low = 0;
        int high = nums.size()-1;
        int ans = INT_MAX;
        while(low<= high){
            int mid = (low+high)/2;
            if(nums[low]<=nums[mid]){
                
                ans = min(ans, nums[low]);
                low = mid+1;
                
            }
            else{
                ans = min(ans, nums[mid]);
                high = mid - 1;
                
            }
        }
        return ans;
    }
};