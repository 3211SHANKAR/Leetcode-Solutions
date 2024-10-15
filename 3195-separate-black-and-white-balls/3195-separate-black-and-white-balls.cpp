class Solution {
public:
    long long minimumSteps(string s) {
         long long int n=s.length();
         long long int count1=0;
         long long int ans=0;
        for(int i=0;i<n;++i){
            if(s[i]== '0' ){
                ans+=count1;
            }
            else if(s[i]=='1'){
                count1++;
            }
        }
        return ans;
    }
};