class Solution {
public:
        vector<int>curr;
        vector<vector<int>>result;

void solve(vector<int>&temp,int idx,int &k){
    if(curr.size()==k){
        result.push_back(curr);
        return ;
}
if (idx >= temp.size()) return;
    curr.push_back(temp[idx]);
    solve(temp,idx+1,k);
    curr.pop_back();
    solve(temp,idx+1,k);
}

    vector<vector<int>> combine(int n, int k) {
        // result.clear();
        // curr.clear();
        vector<int>temp;
        for(int i=1;i<=n;i++){
            temp.push_back(i);
        }
        solve(temp,0,k);
        return result;
    }
};