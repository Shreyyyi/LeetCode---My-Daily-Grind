class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // brute
        int n = matrix.size() , m = matrix[0].size() ;
        unordered_set<int> x , y ;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(matrix[i][j] == 0) {
                    x.insert(i) ;
                    y.insert(j) ;
                }

            }
        }
        for(int it : x){
            for(int j = 0 ; j < m ; j++) {
                matrix[it][j] = 0 ;
            }
        }
        for(int it:y) {
            for(int i = 0 ; i < n ; i++ ) {
                matrix[i][it] = 0 ;
            }
        }
    }
};