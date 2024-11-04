// class Solution {
// public:
//     string compressedString(string word) {
//         unordered_map<char, int> mp;  
//         vector<char> order;  
//         string comp = "";
//         for (int i = 0; i < word.size(); i++) {
//             char ch = word[i];
//             if (mp.find(ch) == mp.end()) {
//                 order.push_back(ch);  
//             }
//             mp[ch]++;
//         }
//         for (int i = 0; i < order.size(); i++) {
//             int count = mp[order[i]];
//             char ch = order[i];
//             while (count >= 9) {
//                 comp += "9" + string(1, ch);
//                 count -= 9;
//             }
//             if (count > 0) {
//                 comp += to_string(count) + string(1, ch);
//             }
//         }
//         return comp;
//     }
// };

class Solution {
public:
    string compressedString(string word) {
        string comp;
        int count = 1;
        
        for (int i = 1; i <= word.size(); ++i) {
            if (i == word.size() || word[i] != word[i - 1] || count == 9) {
                comp += to_string(count) + word[i - 1];
                count = 1;
            } else {
                count++;
            }
        }
        
        return comp;
    }
};


