class Solution {
public:
    string stringHash(string s, int k) {
        string result="";
        for(int i=0;i<s.size();i+=k){
            int sum=0;
            for(int j=0;j<k;++j)
                sum+=s[i+j]-'a';
                sum%=26;
                result+=(char)(sum+'a');
            
        }
        return result;
    }
};