class Solution {
public:
    int n;
     vector<vector<int>>result;

     void solve(int idx ,vector<int>&nums){
        if(idx==n){
            result.push_back(nums);
            return ;
        }
        unordered_set<int>s;
        for(int i=idx;i<n;i++){

            
            if(s.find(nums[i])!=s.end()){
                continue;
            }
            s.insert(nums[i]);
            swap(nums[idx],nums[i]);
            solve(idx+1,nums);
            swap(nums[idx],nums[i]);
        }
       
     }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        n=nums.size();
        solve(0,nums);
        return result;
    }
};