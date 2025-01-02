class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> vowelPrefix(words.size() + 1, 0); 
        for (int i = 0; i < words.size(); i++) {
            int r = words[i].size();
            if (isVowel(words[i][0]) && isVowel(words[i][r - 1])) {
                vowelPrefix[i + 1] = vowelPrefix[i] + 1;
            } else {
                vowelPrefix[i + 1] = vowelPrefix[i];
            }
        }

        vector<int> v; 

        for (int k = 0; k < queries.size(); k++) { 
            int left = queries[k][0], right = queries[k][1]; 
 
            int count = vowelPrefix[right + 1] - vowelPrefix[left];
            v.push_back(count); 
        }

        return v;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
