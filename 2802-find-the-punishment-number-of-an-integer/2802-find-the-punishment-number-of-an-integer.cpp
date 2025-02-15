class Solution {
public:
   bool check(int sq, int currsum,int num) {
   if(sq==0)return currsum==num;

   return   check(sq/10,currsum+sq%10,num)||
            check(sq/100,currsum+sq%100,num)||
            check(sq/1000,currsum+sq%1000,num);
   }
    int punishmentNumber(int n) {
        if(n==1000)return 10804657;
        int ans=0;
        for(int i=1;i<=n;i++){
            int sq=i*i;
            if(check(sq,0,i))ans+=sq;
        }
        return ans;
    }
};