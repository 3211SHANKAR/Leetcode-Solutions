// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         int t=part.length();
//         int i=0;
//         while(i<=(int)s.length()-t){
//             if(s.substr(i,t)==part){
//                 s.erase(i,t);
//                 i=max(0,i-t+1);
//             }
//             else{
//                 i++;
//             }
//         }
//         return s;
//     }
// };


// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while (s.find(part) != string::npos) {  
//             s.erase(s.find(part), part.length());
//         }
//         return s;
//     }
// };


// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         stack<char> st;
//         int t = part.length();
      
//         for (char c : s) {
//             st.push(c);  
            
//             if (st.size() >= t) {  

//                 string temp = "";
//                 vector<char> popped_chars; 
                
//                 bool match = true;
//                 for (int i = t - 1; i >= 0; i--) {
//                     if (st.top() != part[i]) {
//                         match = false;
//                     }
//                     popped_chars.push_back(st.top());
//                     st.pop();
//                 }

            
//                 if (!match) {
//                     for (int i = popped_chars.size() - 1; i >= 0; i--) {
//                         st.push(popped_chars[i]);
//                     }
//                 }
//             }
//         }

  
//         string ans = "";
//         while (!st.empty()) {
//             ans = st.top() + ans;
//             st.pop();
//         }

//         return ans;
//     }
// };


class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char> st;
        int t = part.length();

        for (char c : s) {
            st.push(c);

            if (st.size() >= t) {
                string temp = "";
                for (int i = t - 1; i >= 0; i--) {
                    temp = st.top() + temp;
                    st.pop();
                }

                if (temp != part) { 
                    for (char ch : temp) {
                        st.push(ch);
                    }
                }
            }
        }

       
        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};



