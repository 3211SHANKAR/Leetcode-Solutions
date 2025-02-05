class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;
        int dur=0;
        int near=0;
        int jumps=0; 
        for(int i=0;i<nums.size()-1;i++){
            dur= max(dur,nums[i]+i);
             if (i == near) {
                jumps++;
                near = dur;
                if (near >= n - 1) break;
            }
        }
        return jumps;
    }
};