class Solution {
public:
    int hammingDistance(int x, int y) {
        string s="";
        string t="";
        int count=0;
        while(x){
            s+=to_string(x%2);
            x/=2;
        }
        while(y){
             t+=to_string(y%2);
            y/=2;
        }
        if(s.length()>t.length()){
            int diff1=s.length()-t.length();
        while(diff1--){
            t+="0";
        }
        }
        else if(s.length()<t.length()){
            int diff2=t.length()-s.length();
             while(diff2--){
            s+="0";
        }
        }
      
        reverse(s.begin(),s.end());
        reverse(t.begin(),t.end());
          cout<<s<<" "<<t<<endl;
        int r=s.length();
        for(int i=0;i<r;i++){
            if((s[i]!=t[i]))count++;
        }

        return count;
    }
};