class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
         string temp="";
        for(char c:s){ 
            if(c==' '){
                if (!temp.empty()){
                v.push_back(temp);
                temp="";
                }
            }
            else{
                temp+=c;
            }
        }
          if (!temp.empty()) { 
            v.push_back(temp);
        }
        reverse(v.begin(),v.end());
        string ans="";
       for (int i = 0; i < v.size(); i++) {
            if (i > 0) ans += " ";  
            ans += v[i];
        }
        return ans;
    }
};