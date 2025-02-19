class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
         if(s.size()>t.size())return false;
        
        // for(int i=0;i<s.size();i++){
        //     for(int j=0;j<t.size();j++){
        //         if(s[i]!=t[j])return false;
        //         i++;
        //     }
        // }
        // return true;

        map<char,int>mp1;
        map<char,int>mp2;
        for(char ch:s){
            mp1[ch]++;
        }
         for(char ch:t){
            mp2[ch]++;
        }
        
        for(int i=0;i<t.size();i++){
            if(mp1[t[i]]!=mp2[t[i]])return false;
        }
    return true;
    }
};