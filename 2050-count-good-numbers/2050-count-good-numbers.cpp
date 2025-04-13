class Solution {
public:
  int m=1000000000+7;

   long long powerfun(long long a, long long b) {
        long long result = 1;
        a = a % m;
        while (b > 0) {
            if (b % 2 == 1) {
                result = (result * a) % m;
            }
            a = (a * a) % m;
            b /= 2;
        }
        return result;
    }
    int countGoodNumbers(long long n) {
      
        long long even=n/2 +n%2;
        long long odd =n/2 ;
        long long ans1= powerfun(5,even)%m;
        long long ans2= powerfun(4,odd)%m;
        return (ans1*ans2)%m;
    }
};