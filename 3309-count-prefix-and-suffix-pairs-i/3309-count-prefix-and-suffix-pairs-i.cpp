class Solution {
public:

    bool isprefixandsuffix(string a,string b){
      int n = a.size(), m = b.size();
        if (n > m) return 0; 
        bool isPrefix = (b.substr(0, n) == a);
        bool isSuffix = (b.substr(m - n) == a);
        return isPrefix && isSuffix;
    };

    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                 ans+= (int)isprefixandsuffix(words[i],words[j]);
            }
        }
        return ans;
    }
};