class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // vector<int>count;
        // for(int i=0;i<nums.size();i++){
        //      int ct=0;
        //     for(int j=1;j<nums.size()-1;j++){
        //     if(nums[i]==nums[j]){
        //         ct+=1;
        //         j++;
        //     }
        //     else{
        //          count.push_back(ct);
        //     }
        //     }
        //     count.push_back(ct);
        // }
        // sort(count.begin(),count.end());
        // return count.back();

        map<int ,int>mp;
        for(int num : nums){
            mp[num]++;
        }
        for(int num :nums){
            if(mp[num]>(nums.size()/2)){
                return num;
            }
        }
        return 0;
    }
};