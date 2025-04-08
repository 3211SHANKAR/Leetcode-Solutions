class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;

        while (nums.size() > unordered_set<int>(nums.begin(), nums.end()).size()) {
            if (nums.size() <= 3) {
                nums.clear();
            } else {
                nums.erase(nums.begin(), nums.begin() + 3);
            }
            count++;
        }

        return count;
    }
};
