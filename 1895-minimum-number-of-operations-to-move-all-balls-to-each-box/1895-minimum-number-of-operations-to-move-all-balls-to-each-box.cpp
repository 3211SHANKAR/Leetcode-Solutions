class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> v(n, 0);

        for (int i = 0; i < n; i++) {
            int ans = 0;
            for (int j = 0; j < n; j++) {
                if (boxes[j] == '1') {
                    ans += abs(j - i); 
                }
            }
            v[i] = ans; 
        }

        return v;
    }
};
