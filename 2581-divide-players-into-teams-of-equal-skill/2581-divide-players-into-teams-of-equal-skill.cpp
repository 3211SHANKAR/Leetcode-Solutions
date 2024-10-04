class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
       long long int m=100000007;
       long long int n=skill.size();
     long long int prod=0;
       long long int eqsum=skill[0]+skill[n-1];
       long long int j=n-1;
    
       long long  int i=0;
        // for(int i=1;i<=n-1;i++){
            while(i<j){
            if(skill[i]+skill[j]==eqsum){
                prod+=(skill[i]*skill[j])%m;
                j--;
                i++;
            }
            else{
                return -1;
            }
        }
       
        return prod;
    }
};