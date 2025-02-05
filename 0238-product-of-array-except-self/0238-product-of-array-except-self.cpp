class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zeroCount = 0, product = 1, zeroIndex = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                product *= nums[i];
            } else {
                zeroCount++;
                zeroIndex = i;
            }
        }

        vector<int> result(n, 0);  

        if (zeroCount >= 2) {
            return result;  
        }

        if (zeroCount == 1) {
            result[zeroIndex] = product;  
        } else {
            
            for (int i = 0; i < n; i++) {
                result[i] = product / nums[i];
            }
        }
        return result;
    }
};
