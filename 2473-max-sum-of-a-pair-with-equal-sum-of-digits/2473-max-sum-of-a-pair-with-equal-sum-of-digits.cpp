class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxsum = -1;
        for (int a : nums) {
            int sum = 0, id = a;
            while (id) {
                sum += id % 10;
                id /= 10;
            }
            if (mp.count(sum)) {
                maxsum = max(maxsum, mp[sum] + a);
            }
            mp[sum] = max(mp[sum], a);
        }

        return maxsum;
    }
};
