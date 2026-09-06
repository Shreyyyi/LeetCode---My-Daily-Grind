class Solution {
public:
    int sum(vector<int>& weights){
        int total = 0;
        for(int i=0; i<weights.size(); i++){
            total = total+weights[i];
        }
        return total;
    }
    int daycnt(vector<int>& weights, int mid){
        int total =0;
        int day =1;
        for(int i=0; i<weights.size(); i++){
            if(weights[i]+total>mid){
                total = weights[i];
                day = day+1;
            }
            else{
                total = total +weights[i];
            }
        }
        return day; 
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = sum(weights);

        while(low<=high){
            int mid = (low+high)/2;

            if(daycnt(weights, mid) <= days){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return low;
    }
};