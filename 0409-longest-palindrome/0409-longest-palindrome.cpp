class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(char a:s){
            mp[a]++;
        }
        int count=0;
        bool odfound= false;
        for(auto x:mp){
            if(x.second%2==0){
                count+=x.second;
            }
            else{
                count+=x.second-1;
                odfound=true;
            }
        }
        if(odfound){
            count+=1;
        }
        return count;
    }
};