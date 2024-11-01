class Solution {
public:
    string makeFancyString(string s) {
        string temp = "";
        int count=0;
        for (char a : s) {
            if (temp.empty() || temp.back() != a) {
                count = 1;  
                temp += a;  
            } else {
                if (count < 2) {
                    count++;
                    temp += a;
                }
            }
        }

        return temp;
    }
};
