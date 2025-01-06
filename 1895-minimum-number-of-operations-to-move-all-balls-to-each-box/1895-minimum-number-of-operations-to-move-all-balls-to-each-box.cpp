// class Solution {
// public:
//     vector<int> minOperations(string boxes) {
//         int n = boxes.size();
//         vector<int> v(n, 0);

//         for (int i = 0; i < n; i++) {
//             int ans = 0;
//             for (int j = 0; j < n; j++) {
//                 if (boxes[j] == '1') {
//                     ans += abs(j - i); 
//                 }
//             }
//             v[i] = ans; 
//         }

//         return v;
//     }
// };

//second approach//

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> result(n, 0);
        vector<int> ones; 

        for (int i = 0; i < n; i++) {
            if (boxes[i] == '1') {
                ones.push_back(i);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int idx : ones) {
                result[i] += abs(idx - i); 
            }
        }

        return result;
    }
};




