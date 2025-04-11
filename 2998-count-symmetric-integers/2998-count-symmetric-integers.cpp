class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            string str= to_string(i);
            int m= str.length();
               if (m % 2 == 0) {
                int sum1 = 0;
                int sum2 = 0;
             for (int j = 0; j < m / 2; j++) {
                    sum1 += str[j] - '0';
                }
                for (int j = m / 2; j < m; j++) {
                    sum2 += str[j] - '0'; 
                }
             
             
             if(sum1==sum2){
             count++;    
         }
    }
}      
        return count;
    }
};