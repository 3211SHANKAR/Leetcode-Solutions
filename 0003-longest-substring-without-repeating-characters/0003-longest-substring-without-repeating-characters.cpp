class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int ml=0;
        int lpt=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            
            if(mp.find(s[i])==mp.end() || mp[s[i]]<ml){
                lpt=max(lpt,i-ml+1);
            }
            else{
               ml= mp[s[i]]+1;
            }
            mp[s[i]]=i;
        }
        return lpt;

    }
};



