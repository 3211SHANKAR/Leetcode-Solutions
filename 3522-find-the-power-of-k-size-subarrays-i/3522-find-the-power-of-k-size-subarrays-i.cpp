class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> r; 

        for (int i = 0; i <= n - k; i++) {
            bool isValid = true;
            for (int j = 0; j < k - 1; j++) {
                if ((nums[i + j + 1] <= nums[i + j]) || (nums[i + j] != nums[i + j + 1] - 1)) {
                    isValid = false;
                    break;
                }
            }
            if (isValid) {
                r.push_back(nums[i + k - 1]); 
            } else {
                r.push_back(-1); 
            }
        }

        return r;
    }
};
