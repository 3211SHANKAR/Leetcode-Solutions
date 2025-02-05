class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int jump = 0;
        int  t = nums.size();
        for(int i=0;i<t;i++)
        {
            jump = max(jump, nums[i]+i);
            if(!nums[i])
            {
                if(i+1 == t) return true;
                if(jump == i) return false;
            }
        }   
        return true; 
    }
};