class Solution {
public:
    string removeOccurrences(string s, string part) {
        int t=part.length();
        int i=0;
        while(i<=(int)s.length()-t){
            if(s.substr(i,t)==part){
                s.erase(i,t);
                i=max(0,i-t+1);
            }
            else{
                i++;
            }
        }
        return s;
    }
};





