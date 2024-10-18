class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>vp;
        vector<int>vn;
        vector<int>res;

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                vp.push_back(nums[i]);
            }
            else {
                vn.push_back(nums[i]);
            }
        }
          int x=0;
            int y=0;
        for(int i=0;i<n;i++){
          
            if(i%2==0){
                res.push_back(vp[x]);
                x++;
            }
            else{
                res.push_back(vn[y]);
                y++;
            }
        }
        return res;
    }
};