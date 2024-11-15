class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        int cl = 0;
        while (cl < n - 1 && arr[cl] <= arr[cl + 1]) {
            cl++;
        }
        if (cl == n - 1) return 0;
        int cr = n - 1;
        while (cr > 0 && arr[cr - 1] <= arr[cr]) {
            cr--;
        }
        int del = min(n - cl - 1, cr);
        
        for (int i = 0, j = cr; i <= cl && j < n; ) {
            if (arr[i] <= arr[j]) {
                del = min(del, j - i - 1);
                i++;
            } else {
                j++;
            }
        }
        
        return del;
    }
};
