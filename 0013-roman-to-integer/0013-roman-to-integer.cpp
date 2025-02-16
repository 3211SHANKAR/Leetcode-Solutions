
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mix;
        mix['I']=1;     
        mix['V']=5;
        mix['X']=10;
        mix['L']=50;
        mix['C']=100;
        mix['D']=500;
        mix['M']=1000;
        int r=s.size();
        int result=0;
        for(int i=0;i<r;i++){
            if(mix[s[i]]<mix[s[i+1]]){
                result=result-mix[s[i]];
            }
            else{
                result=result+mix[s[i]];
            }
        }
        return result;
    }
};