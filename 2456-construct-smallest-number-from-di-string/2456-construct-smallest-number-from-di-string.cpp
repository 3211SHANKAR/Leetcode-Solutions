// class Solution {
// public:
//     string smallestNumber(string pattern) {
//         int count=1;
//         stack<char>st;
//         string nums="";
//         int n=pattern.size();
//         for(int i=0;i<=n;i++){
//             st.push(count+'0');
//             if(i==n|| pattern[i]=='I'){
//                 while(!st.empty()){
//                     nums+=st.top();
//                     st.pop();
//                 }
//             }
//              count++;
//         }
//         return nums;
//     }
// };

class Solution {
public:
    string smallestNumber(string pattern) {
        int count = 1;
        vector<char> vec;  // Using vector instead of stack
        string nums = "";
        int n = pattern.size();
        
        for (int i = 0; i <= n; i++) {
            vec.push_back(count + '0');
            if (i == n || pattern[i] == 'I') {
                while (!vec.empty()) {
                    nums += vec.back();
                    vec.pop_back();
                }
            }
            count++;
        }
        return nums;
    }
};
