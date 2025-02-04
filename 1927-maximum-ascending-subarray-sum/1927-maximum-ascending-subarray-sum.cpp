class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0];
        int maxsum=sum;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])sum+=nums[i];
            else{
                maxsum=max(sum,maxsum);
                sum=nums[i];
            }
        }
        maxsum = max(maxsum, sum);
        return maxsum;
    }
};