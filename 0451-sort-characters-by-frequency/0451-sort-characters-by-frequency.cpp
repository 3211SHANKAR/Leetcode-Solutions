class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char a:s){
            mp[a]++;
        }
        vector<pair<int, char>> freqVec;
        for (auto& [ch, freq] : mp) {
            freqVec.push_back({freq, ch});
        }
         sort(freqVec.begin(), freqVec.end(), [](pair<int, char>& a, pair<int, char>& b) {
            return a.first > b.first;  
        });
        
         string ans="";
    for (auto& [freq, ch] : freqVec) {
            ans.append(freq, ch);  
        }
        return ans;
    }
};