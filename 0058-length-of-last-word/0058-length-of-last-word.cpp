class Solution {
public:
int count=0;
bool flag = false;
    int lengthOfLastWord(string s) {
        int t=s.length()-1;;
        for(int i=t;i>=0;i--){
            if(s[i]!=' '){
                flag=true;
                count++;
            }
            else if(flag){
                break;
            }
        
        }
        return count;
    }
};