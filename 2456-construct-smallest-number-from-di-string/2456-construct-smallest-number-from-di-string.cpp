class Solution {
public:
    string smallestNumber(string pattern) {
        int count=1;
        stack<char>st;
        string nums="";
        int n=pattern.size();
        for(int i=0;i<=n;i++){
            st.push(count+'0');
           
            if(i==n|| pattern[i]=='I'){
                while(!st.empty()){
                    nums+=st.top();
                    st.pop();
                }
            }
             count++;
        }
        return nums;
    }
};