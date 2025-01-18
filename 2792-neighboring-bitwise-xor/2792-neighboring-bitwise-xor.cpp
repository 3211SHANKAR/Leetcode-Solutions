class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        vector<int> original(n);
       
        original[0] = 0; 
        for (int i = 1; i < n; i++) {
            original[i] = derived[i - 1] ^ original[i - 1];
        }
        vector<int> store(n);
        for (int i = 0; i < n - 1; i++) {
            store[i] = original[i] ^ original[i + 1];
        }
        store[n - 1] = original[n - 1] ^ original[0]; 

        if (store == derived) return true;
        return false;
    }
};


