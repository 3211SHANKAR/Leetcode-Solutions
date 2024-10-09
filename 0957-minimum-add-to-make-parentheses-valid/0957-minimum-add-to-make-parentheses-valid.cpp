class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        int cl=0;
        int cr=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                cl++;
        }
        else if(s[i]==')'){
            if(cl>0){
                cl--;
            }
            else{
                cr++;
            }
        }
        }
        
        return cl+cr;
    }
};
