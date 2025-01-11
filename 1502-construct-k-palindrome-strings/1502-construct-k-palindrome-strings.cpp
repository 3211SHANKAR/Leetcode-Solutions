class Solution {
public:
    bool canConstruct(string s, int k) {
        map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        if(k>s.size())return false;
    
        int odd=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if((it->second)%2!=0)odd++;
        }
        if(odd>k)return false;
        return true;;
    }
};