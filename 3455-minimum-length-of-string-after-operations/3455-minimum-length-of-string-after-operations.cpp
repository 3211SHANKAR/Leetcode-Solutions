class Solution {
public:
    int minimumLength(string s) {
        if(s.size()<=2)return s.size();
        map<char,int>mp;
        for(char a :s){
            mp[a]++;
        }
        int remcount=0;
        for(auto it=mp.begin();it!=mp.end();it++){
           int  length=it->second;
           if(length%2!=0){
            remcount+=length-1;
           }
           else{
            remcount+=length-2;
           }
        }
        return s.size()-remcount;
    }
};

