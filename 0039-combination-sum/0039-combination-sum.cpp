class Solution {
public:


  vector<int>curr;
vector<vector<int>>result;

void solve( vector<int>& candidates,int idx,int &target){
   int sum = accumulate(curr.begin(), curr.end(), 0);

        if (sum == target) {
            result.push_back(curr);
            return;
        }
 if (sum > target || idx >= candidates.size()) return;

    curr.push_back(candidates[idx]);
    solve(candidates,idx,target);
    curr.pop_back();
    solve(candidates,idx+1,target);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates,0,target);
        return result;
    }
};