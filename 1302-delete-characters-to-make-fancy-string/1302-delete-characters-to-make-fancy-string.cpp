

class Solution {
public:
    string makeFancyString(string s) {
        unordered_map<char, int> mp;
        string temp = "";

        for (char a : s) {
            if (temp.empty() || temp.back() != a) {
                mp[a] = 1;  
                temp += a;  
            } else {
                if (mp[a] < 2) {
                    mp[a]++;
                    temp += a;
                }
            }
        }

        return temp;
    }
};
