class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                str+= tolower(s[i]);
            }
        }
        int n=str.length();
        for(int i=0;i<n/2;i++){
                if(str[i]!=str[n-1-i]){
                    return false;
                }
            }
        
        return true;
    }
};