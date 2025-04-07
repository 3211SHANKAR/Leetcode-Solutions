class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int tsum=accumulate(nums.begin(),nums.end(),0);
        if(tsum%2)return false;
        tsum/=2;
        vector<bool>dp(tsum+1,false);
        dp[0]=true;
        for(auto x:nums){
            for(int i=tsum;i>=x;i--){
                dp[i]=dp[i]||dp[i-x];
            }
        }
        return dp[tsum];
    }
};