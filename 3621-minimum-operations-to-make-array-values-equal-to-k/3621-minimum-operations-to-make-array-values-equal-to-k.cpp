class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int>s;
        sort(nums.begin(),nums.end());
        if(nums[0]<k)return -1;
        for(auto a:nums){
            if(a>k)s.insert(a);
        }
        return s.size();
    }
};