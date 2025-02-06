class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
        int prod=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                prod=nums[i]*nums[j];
                mp[prod]++;
            }
        }
      
       int ans=0;
        
        for(auto &a:mp){
            int id= a.second;
        if(id>1){
            ans+= 8*((id)*(id-1))/2;
        }

       }
        return ans;
    }
};