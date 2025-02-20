// class Solution {
// public:
//     bool isValid(string s) {
//         for(int i=0;i<s.size()-1;i++){
//         if(s[i]=='('){
//             while(s.length()--){
//                if( s[i]==')') 
//                continue;
//             }
//         }
//          if(s[i]=='{'){
//             while(s.length()--){
//                if( s[i]=='}') 
//                continue;
//             }
//         }
//          if(s[i]=='['){
//             while(s.length()--){
//                if( s[i]==']') 
//                continue;
//             }
//         }
//         return true;
        
//         }
//             return false;
        
//     }
// };


class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
             else if(s[i]==')'){
                if( !st.empty() && st.top()=='(')st.pop();
                else return false;
            }

            else if(s[i]=='['){
                st.push(s[i]);
            }
             else if(s[i]==']'){
                if(!st.empty()&&st.top()=='[')st.pop();
                else return false;
            }

           else if(s[i]=='{'){
                st.push(s[i]);
            }
             else if(s[i]=='}'){
                if(!st.empty()&&st.top()=='{')st.pop();
                else return false;
            }
           
            }
        return st.size()?false:true;
    }
};