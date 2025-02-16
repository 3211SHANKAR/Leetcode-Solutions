class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;
        map<char ,int>mps;
        map<char ,int>mpt;
      
        for(int i=0;i<s.size();i++){
            if(mps[s[i]]!=mpt[t[i]])return false;
             mps[s[i]] = i + 1;
             mpt[t[i]] = i + 1;
        }
    return true;
    }
};