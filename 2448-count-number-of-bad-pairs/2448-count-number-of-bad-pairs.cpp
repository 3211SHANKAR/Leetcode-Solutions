class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
       long long int count=0;
       int n=nums.size();
      long long int tp=(1LL*n*(n-1))/2;
      long long int gp=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
           mp[nums[i]-i]++;
        }
        for(auto &a:mp){
            int id=a.second;
            if((id)>1){
                gp+=(1ll*id*(id-1))/2;
            }
        }
        return tp-gp;
    }
};