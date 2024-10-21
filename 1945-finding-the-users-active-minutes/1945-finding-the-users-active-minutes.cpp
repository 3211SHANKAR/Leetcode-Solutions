class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k);
        unordered_map<int,set<int>> mp;
        for(auto it:logs)
            mp[it[0]].insert(it[1]);
        for(auto it:mp)
            ++ans[it.second.size()-1];
        return ans;        
    }
};