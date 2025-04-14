class Solution {
public:
         int findtheindex(int n, int k){
        if(n == 1) return 0;
        int idx = findtheindex(n - 1, k);
        return (idx + k) % n;
    }
    int findTheWinner(int n, int k) {
        return findtheindex(n,k)+1;
        
    }
};