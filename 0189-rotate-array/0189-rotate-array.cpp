class Solution {
public:
    vector<int> rotate(vector<int>& v, int k) {
       int n = v.size();
       k%=n;
       reverse(v.begin(),v.end());
       reverse(v.begin(),v.begin()+k);
       reverse(v.begin()+k,v.end());
    return v;
    }
};