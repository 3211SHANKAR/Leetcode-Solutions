class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums,  long long int k) {
        // for(int i=0;i<=nums.size()-1;){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j] &&   abs(i-j) <=k){
        //         return true;
        //         break;
        //         }
                
        //     }
        //     i++;
        // }
        // return false;
        unordered_map<int ,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                if(i-mp[nums[i]]<=k)
                return true;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};