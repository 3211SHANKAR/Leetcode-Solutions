class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int cp=0;
        int cn=0;
        for(auto a:nums){
            if(a>0)cp++;
            else if(a<0)cn++;
        }
        return max(cp,cn);
    }
};