class Solution {
public:
    int maxScore(string s) {
        int res=0,one=0,zero=0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='1')one++;
        }
         for(int i=1;i<s.size();i++){
            if(s[i-1]=='0')zero++;
            res=max(res,(one+zero));
            if(s[i]=='1')one--;
        }
        return res;
    }
};