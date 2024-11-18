class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        int sum=0;
        vector<int>v;
         if(k==0){
                 for (int j=0;j<n;j++) {
                     v.push_back(0);
                } 
             }
        for(int i=0;i<n;i++){
            int sum=0;
           if(k>0){
              for (int j = 1; j <= k; j++) {
                    sum += code[(i + j) % n]; 
                } 
                v.push_back(sum);
             }
            else if (k<0){
                for (int j = 1; j <= -k; j++) {
                    sum += code[(i-j + n) % n]; 
                }
                v.push_back(sum);

            }
            
        }
        return v;
    }
};