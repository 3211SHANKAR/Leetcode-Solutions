class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1])count++;
            }
            if(count==n-2){
                if(nums[0]>=nums.back())return true;
                else return false;
            }
             else if(count==n-1)return true;
            return false;
    }
};