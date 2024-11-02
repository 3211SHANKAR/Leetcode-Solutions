class Solution {
public:
    bool isCircularSentence(string s) {
        bool flag = true;
        int t=s.size()-1;
        for(int i=1;i<s.size()-1;i++){
            if(s[i]==' '){
                if(s[i-1]!=s[i+1]){
                    flag=false;
                }
            }
        }
        if(flag && s[0]==s[t])return true;
        return false;
    }
};