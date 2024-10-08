class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int cp=0;
        int cn=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                cp++;
            }
            else if(nums[i]<0){
                cn++;
            }
        }
        if(cp>=cn)return cp;
        return cn;
    }
};