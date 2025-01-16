class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
      
        int temp1=0;
        int temp2=0;
        for(int i=0;i<nums1.size();i++){
            temp1^=nums1[i];
        }
        for(int j=0;j<nums2.size();j++){
                temp2^=nums2[j];
            }
           int m = nums1.size(), n = nums2.size();
        
        return (n % 2 ? temp1 : 0) ^ (m % 2 ? temp2 : 0);

    }
};