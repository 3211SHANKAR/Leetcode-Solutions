class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> v(201,0);
        for(int i=0;i<nums.size();++i)
            v[nums[i]]++;
        int mx=0;
        for(int i=1;i<201;++i)
            mx=max(mx,v[i]);
        vector<vector<int>> ans(mx);
        for(int i=1;i<201;++i)
        {
            for(int j=0;j<v[i];++j)
                ans[j].push_back(i);
        }
        return ans;
    }
};