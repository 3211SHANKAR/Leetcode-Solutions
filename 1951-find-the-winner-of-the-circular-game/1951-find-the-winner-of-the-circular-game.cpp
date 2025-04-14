class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
        int idx=0;
        for(int i=0;i<n;i++){
            idx=(idx+k-1)%v.size();
            v.erase(v.begin()+idx);
        }
        return v[0];
    }
};