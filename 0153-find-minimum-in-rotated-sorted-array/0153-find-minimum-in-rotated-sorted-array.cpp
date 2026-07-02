class Solution {
public:
    int findMin(vector<int>& nums) {
        int drop = 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                drop++;
                return nums[i+1];
                break;
            }
        }
        return nums[0];

        // sort(nums.begin(), nums.end());
        // return nums[0];
        

    }
};