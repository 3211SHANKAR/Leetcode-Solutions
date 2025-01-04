class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char, pair<int, int>> mp; 
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (mp.find(s[i]) == mp.end()) {
                mp[s[i]] = {i, i}; 
            } else {
                mp[s[i]].second = i; 
            }
        }

        int ans = 0;

        for (auto &element : mp) {
            char ch = element.first;
            int first_idx = element.second.first;
            int last_idx = element.second.second;

            if (last_idx > first_idx) { 
                map<char, bool> inner_elements; 
                for (int i = first_idx + 1; i < last_idx; i++) {
                    inner_elements[s[i]] = true;
                }
                ans += inner_elements.size();
            }
        }

        return ans;
    }
};
