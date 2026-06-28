class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int start = 1;
        if(arr[0]!=1){
            arr[0]=start;
        }
        for(int i=1; i<arr.size(); i++){
            if(abs(arr[i]-arr[i-1])>1){
                start = start +1;
                arr[i]=start;
            }
            else{
                start = arr[i];
            }
        }
        return start;
    }
};