class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxheight=0;
        while(i<j){
            maxheight=max(maxheight,min(height[i],height[j])*(j-i));
              if (height[i] < height[j]) {
                i++;  
            } else {
                j--;  
            }
        }
        return maxheight;
    }
};