class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int id=0;
        for(int temp:nums){
            if(id==0 || id==1 || nums[id-2] != temp){
                nums[id]=temp;
                id++;
            }
        }
        return id;
    }
};