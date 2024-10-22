class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>v;
        int i=0;
    
        while(i<s.length()){
            int j=i;
            int last= s.find_last_of(s[i]);
            while(j<last){
                last = max(last, (int)s.find_last_of(s[j])); 
                j++;
            }
             v.push_back(j-i+1);
                i=last+1;
        }
    return v;
    }
};