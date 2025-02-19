class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vp;
        sort(nums.begin(), nums.end()); 
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; 

            int j = n - 1;
            int k = i + 1;

            while (k < j) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0) {
                    vp.push_back({nums[i], nums[j], nums[k]});
                    k++;
                    j--;

                    while (k < j && nums[k] == nums[k - 1]) k++;
                    while (k < j && nums[j] == nums[j + 1]) j--; 
                } 
                else if (sum < 0) {
                    k++;
                } 
                else {
                    j--;
                }
            }
        }
        return vp;
    }
};
