class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size();
        int bulls=0;
        int cows=0;
        map<char,int>mp;
        for (int i = 0; i < n; i++) {
            if (secret[i] == guess[i]) {
                bulls++;  
            } else {
                mp[secret[i]]++;  
            }
        }

        for (int i = 0; i < n; i++) {
            if (secret[i] != guess[i] && mp[guess[i]] > 0) {  
                cows++;  
                mp[guess[i]]--;  
            }
        }
        string ans= to_string(bulls)+"A"+to_string(cows)+"B";
        return ans;
    }
};