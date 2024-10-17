class Solution {
public:
    int maximumSwap(int num) {
        string temp = to_string(num);
        int l = temp.length();
        vector<int> v(10, -1);
        
        for (int i = 0; i < l; i++) {
            v[temp[i] - '0'] = i;
        }
        
        for (int i = 0; i < l; i++) {
            for (int d = 9; d > temp[i] - '0'; d--) {
                if (v[d] > i) {
                    
                    swap(temp[i], temp[v[d]]);
                    return stoi(temp); 
                }
            }
        }
        
        return num; 
    }
};
