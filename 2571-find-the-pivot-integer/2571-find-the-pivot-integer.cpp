class Solution {
public:
    int pivotInteger(int n) {
        int sum=0;
        int totalsum=(n*(n+1))/2;
        for(int i=1;i<=n;i++){
            sum+=i;
            if(sum==totalsum-sum+i)return i;
        }
    return -1;
    }
};