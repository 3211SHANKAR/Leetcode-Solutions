class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> v; 
        set<int> sa, sb; 
        
        for (int i = 0; i < A.size(); i++) {
            sa.insert(A[i]); 
            sb.insert(B[i]); 
            
            vector<int> result; 
            set_intersection(sa.begin(), sa.end(), sb.begin(), sb.end(), back_inserter(result));
            
            v.push_back(result.size()); 
        }
        
        return v;
    }
};
