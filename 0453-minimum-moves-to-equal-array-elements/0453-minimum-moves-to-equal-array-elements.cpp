class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=INT_MAX;
        int res=0;
        for(int a:nums){
            n=min(n,a);
        }
        for(int a:nums){
            res+=a-n;
        }
        return res;
    }
};