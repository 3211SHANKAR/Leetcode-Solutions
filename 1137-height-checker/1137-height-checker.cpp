class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        vector<int>exp(heights.begin(),heights.end());
        int count=0;
        sort(exp.begin(),exp.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=exp[i])count++;
        }
        return count;
    }
};