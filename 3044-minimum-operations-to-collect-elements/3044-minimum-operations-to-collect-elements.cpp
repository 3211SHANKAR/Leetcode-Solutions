class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        set<int> s;
        for(int i=1;i<=k;i++)s.insert(i);
        int ans =0;
        
        while(!s.empty())
        {
            for(int i=nums.size()-1;i>=0;i--)
            {
                auto ptr = s.find(nums[i]);
				
                if(ptr!=s.end())  s.erase(ptr);
				
                ans++;
				
                if(s.empty()) return ans;
            }
        }
        
        return ans;
    }
};