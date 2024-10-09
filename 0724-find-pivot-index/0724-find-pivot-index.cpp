class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>v1(nums.size());
        vector<int>v2(nums.size());
        int sum1=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++){
            sum1+=nums[i];
            v1[i]=sum1;
        }
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            sum2+=nums[i];
            v2[i]=sum2;
        }

    for(int i=0;i<n;i++){
        if(v1[i]==v2[i])return i;
    }
        return -1;
    }
};