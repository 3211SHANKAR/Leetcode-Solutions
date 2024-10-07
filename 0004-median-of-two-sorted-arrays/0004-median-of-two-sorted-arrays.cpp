class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        double median=0.0;
        
        for(int i=0;i<n2;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());

        if(n%2==0){
        median = (nums1[n/2 -1]+nums1[n/2])/ double(2);
        }
        else {
        median =nums1[n/2];
        }
        return median;
    }
};