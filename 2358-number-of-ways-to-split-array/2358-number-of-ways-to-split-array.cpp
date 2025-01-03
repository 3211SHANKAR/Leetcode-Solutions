class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long>presum(nums.size()+1,0);
        presum[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            presum[i]=nums[i]+presum[i-1];
        }
        int count=0;
        int n=nums.size();
        for(int j=0;j<n-1;j++){
            if(presum[j]>=presum[n-1]-presum[j])count++;
        }
        return count;
    }
};