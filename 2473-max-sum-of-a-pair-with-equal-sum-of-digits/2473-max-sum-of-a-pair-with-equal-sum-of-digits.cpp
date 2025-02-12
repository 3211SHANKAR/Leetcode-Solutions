class Solution {
public:
    int maximumSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int, int> mp;
        int maxsum = -1;
        for (int i=0 ;i< nums.size();i++) {
            int sum = 0;
            int id = nums[i];
            while (id) {
                sum += id % 10;
                id /= 10;
            }
            if (mp.count(sum)) {
                maxsum = max(maxsum, mp[sum] + nums[i]);
            }
            mp[sum] =  nums[i];
        }

        return maxsum;
    }
};
