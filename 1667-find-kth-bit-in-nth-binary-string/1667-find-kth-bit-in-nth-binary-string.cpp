class Solution {
public:


string reverseAndInvert(string s) {
        string res = "";
        for (char c : s) {
            res += (c == '0') ? '1' : '0';
        }
        reverse(res.begin(), res.end());
        return res;
    }

    char findKthBit(int n, int k) {
        vector<string>v(n);
        string s1="0";
        v[0]=s1;
        for(int i=1;i<n;i++){
            v[i]=v[i-1]+"1"+reverseAndInvert(v[i-1]);
        }
        string res=v.back();
       return res[k-1];
    }
};