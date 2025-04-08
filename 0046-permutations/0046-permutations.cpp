class Solution {
public:
   
    vector<vector<int>>result;

    void solve(vector<int>&nums,int idx){
        if(idx==nums.size()){
            result.push_back(nums);
            return;
        }
       for (int i = idx; i < nums.size(); ++i) {
            swap(nums[idx], nums[i]);        // Choose
            solve(nums, idx + 1);            // Explore
            swap(nums[idx], nums[i]);        // Un-choose (Backtrack)
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums,0);
        return result;
    }
};