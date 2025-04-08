class Solution {
public:
    int n;
     vector<vector<int>>result;

     void solve(unordered_map<int,int>&mp ,vector<int>&temp){

        if(temp.size()==n){
            result.push_back(temp);
            return;
        }
        for(auto &[num,val]:mp){
            if(val==0){
                continue;
            }

            temp.push_back(num); //do 
            mp[num]--;
            solve(mp,temp); //explore

            temp.pop_back(); //undo
            mp[num]++;
        
        }
     }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a:nums){
            mp[a]++;
        }
        n=nums.size();
        vector<int>temp;
        solve(mp,temp);
        return result;
    }
};