class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt =0;
        for(auto pt:patterns){
            
            if(word.find(pt) != string::npos){
                cnt++;
            }
        }
        return cnt;
    }
};