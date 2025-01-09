class Solution {
public:
     bool isprefix(string a,string b){
        int n=a.size();
         bool check = (b.substr(0, n) == a);
         return check;
        };

    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            ans+=(int)isprefix(pref,words[i]);
        }
        return ans;
    }
};