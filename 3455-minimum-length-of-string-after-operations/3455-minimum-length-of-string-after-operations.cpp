class Solution {
public:
    int minimumLength(string s) {
        if(s.size()<=2)return s.size();
        map<char,int>mp;
        for(char a :s){
            mp[a]++;
        }
        int ans=0;
        for(auto it=mp.begin();it!=mp.end();it++){
           int  length=it->second;
           if(length%2==0 && length >=2){
            ans+=2;
           }
           else{
            ans+=1;
           }
        }
        return ans;
    }
};

