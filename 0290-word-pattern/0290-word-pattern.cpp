class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> mpp;
        unordered_map<string, int> mps;
        istringstream stx(s);
        int i = 0, n = pattern.size();

        for (string id; stx >> id; i++) {
            if (i == n || mpp[pattern[i]] != mps[id]) return false;
            mpp[pattern[i]] = i + 1;
            mps[id] = i + 1; 
        }
        return i == n;
    }
};
