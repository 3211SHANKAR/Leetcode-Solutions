class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int>mp;
        for(int i = 0  ; i < magazine.length() ; i++)
        {
            mp[magazine[i]]++;
        }
        for (int i = 0; i < ransomNote.length(); i++) {
            mp[ransomNote[i]]--;
            if (mp[ransomNote[i]] < 0) {
                return false;  
            }
        }
        return true;
    }
};