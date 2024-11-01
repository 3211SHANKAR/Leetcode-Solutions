class Solution {
public:
    string longestPalindrome(string s) {
        int length = s.length(); 
        int start = 0; 

        for (int i = 0; i + length <= s.length(); i++) {
            int left = i;
            int right = length - 1 + i; 
            bool found = false; 
            
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                if (left >= right) { 
                    found = true; 
                    start = i; 
                    break;
                }
                left++;
                right--;
            }
            
            if (found) {
                break;
            } else {
                right = length - 1 + i; 
            }
            
            if (right == s.length() - 1) { 
                i = -1; 
                length--; 
            }
        }

        return s.substr(start, length); 
    }
};
