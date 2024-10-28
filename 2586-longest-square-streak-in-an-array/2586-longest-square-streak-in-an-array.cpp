class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
     long long  int ans=0;
        for(int id:nums){
           long long int temp=id;
           long long  int count=0;
       while(s.find(temp)!=s.end()){
        count++;
        temp=temp*temp;
        if(temp > 100000)break;
       }
        
       ans=max(count,ans);
        }
        if(ans>1)return ans;
        return -1;
    }
};